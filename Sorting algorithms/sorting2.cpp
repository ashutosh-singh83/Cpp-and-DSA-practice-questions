//selection sort
#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int mini_idx=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[mini_idx]){
                mini_idx=j;
            }
            if(mini_idx!=i){
                swap(v[i],v[mini_idx]);
            }
        }
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
    selectionSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}