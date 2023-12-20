#include<iostream>
#include<vector>
using namespace std;
//Time complexity=O(logn)
//Space complexity=O(1)
int firstoccurence(vector<int> &input, int k){
    int n=input.size();
    int lo=0;
    int hi=n-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(input[mid]==k){
            ans=mid;
            hi=mid-1;

        }
        else if(input[mid]<k){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    return ans;
}
int main(){
    int n; cin>>n;
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int k;
    cin>>k;
    int index=firstoccurence(input,k);
    cout<<index<<endl;
    return 0;
    

}