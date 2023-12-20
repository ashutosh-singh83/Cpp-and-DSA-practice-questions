//running sum
#include<iostream>
#include<vector>
using namespace std;
void runningSum(vector<int> &v,int n){
    for(int i=1;i<n;i++){
        v[i]=v[i]+v[i-1];
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    runningSum(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;

}