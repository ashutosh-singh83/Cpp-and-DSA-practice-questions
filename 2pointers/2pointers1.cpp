#include<iostream>
#include<vector>
using namespace std;
void sortArr01(vector<int> &v,int n){
    int zero_count=0;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            zero_count++;
        }
    }
    for(int i=0;i<n;i++){
        if(i<zero_count){
            v[i]=0;
        }else{
            v[i]=1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sortArr01(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    


}