#include<iostream>
#include<vector>
using namespace std;
void countsort(vector<int> &v){
    int n=v.size();
    int max_ele=-99;
    for(int i=0;i<n;i++){
        max_ele=max(v[i],max_ele);
    }
    //freq array
    vector<int> freq(max_ele+1,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    //calc cumulative frequency
    for(int i=1;i<=max_ele;i++){
        freq[i]+=freq[i-1];
    }
    //sorted ans array
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[--freq[v[i]]]=v[i];
    }
    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }

}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    countsort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}