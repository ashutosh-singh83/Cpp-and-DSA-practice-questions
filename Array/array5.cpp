//sum of range
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    //calculating prefix sum array
    
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }
    cout<<"Enter no. of queries:";
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int ans=0;
        // ans=prefix_sum[r]-prefix_sum[l-1]
        ans =v[r]-v[l-1];
        cout<<ans<<endl;

    }
    return 0;

}