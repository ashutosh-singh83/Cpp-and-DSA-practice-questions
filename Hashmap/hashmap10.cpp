//longest pair whose sum =0
//T.C=O(n),where n=length of vector
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> prefixSum(vector<int> &v){
    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }
    return v;
}
int longestPair(vector<int> &v){
    unordered_map<int,int> m;
    prefixSum(v);
    int subArrlength=0;
    for(int i=0;i<v.size();i++){
        if(m.find(v[i])!=m.end()){
            subArrlength=max(subArrlength,i-m[v[i]]);
        }
        else{
            m[v[i]]=i;
        }
    }
    return subArrlength;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=longestPair(v);
    cout<<l<<endl;
    return 0;
}