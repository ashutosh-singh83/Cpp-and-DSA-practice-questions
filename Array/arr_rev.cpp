#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[]={1,6,7,9};
    int b[]={4,5,10};
    int n=4;
    int m=3;
    int res[m+n];
    int i=0;
    int j=0;
    int k=0;
    while(i<n&&j<m){
        if(a[i]>b[j]){
            res[k++]=b[j++];
            
        }
        else{
            res[k++]=a[i++];
            
        }
    }
    while(i<n){
        res[k++]=a[i++];
    }
    while(j<m){
        res[k++]=b[j++];
        
    }
    cout<<"The resultant sorted array is:";
    for(int i=0;i<k;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}