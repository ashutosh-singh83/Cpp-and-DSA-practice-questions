#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v={4,1,2,4,1};
    int n=5;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]==v[j]){
                v[i]=v[j]=-1;
            }
    }
}
    for(int i=0;i<n;i++){
        if(v[i]>0){
            cout<<v[i];
        }
    }
}
    
