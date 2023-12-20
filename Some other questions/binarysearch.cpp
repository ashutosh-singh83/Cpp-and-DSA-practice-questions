#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> &input, int k){
    int n=input.size();
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(input[mid]==k){
            return mid;
        }
        else if(input[mid]<k){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    return -1;
}
int main(){
    int n; cin>>n;
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int k;
    cin>>k;
    int index=binarysearch(input,k);
    cout<<index<<endl;
    return 0;
    

}