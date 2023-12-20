#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //prefixSum array calculation
    for(int i=0;i<n;i++){
        v[i]+=v[i-1];
    }
    int l,r;
    cin>>l>>r;
    int ans=v[r]-v[l-1];
    cout<<ans<<endl;
    return 0;
}