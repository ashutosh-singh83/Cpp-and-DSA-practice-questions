//print array recursively
#include<iostream>
using namespace std;
void print(int *arr,int idx,int n){
    if(idx==n) return;
    cout<<arr[idx]<<endl;
    print(arr,idx+1,n);
}
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    print(arr,0,n);
    return 0;
}