#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    k%=n;
    int ansarray[n];
    for(int i=n-k;i<n;i++){
        ansarray[i-(n-k)]=arr[i];
    }
    for(int i=0;i<n-k;i++){
        ansarray[i+k]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<ansarray[i]<<" ";
    }
    return 0;



    

}