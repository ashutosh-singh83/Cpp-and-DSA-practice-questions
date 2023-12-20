#include<iostream>
using namespace std;
void reverse(int array[],int n){
    int mid=n/2;
    for(int i=0;i<mid;i++){
        int temp=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;

}