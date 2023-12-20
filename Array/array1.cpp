#include<iostream>
using namespace std;
void reverseArr(int arr[],int n){
    for(int i=0;i<(n/2);i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    

}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    reverseArr(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}