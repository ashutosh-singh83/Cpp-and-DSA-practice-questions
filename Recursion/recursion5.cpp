//maximum elementy from array
#include<iostream>
using namespace std;
int max_value(int*arr,int idx,int n){
    if(idx==n-1){
        return arr[idx];
    }
    return max(arr[idx],max_value(arr,idx+1,n));
}
int main(){
    int n=5;
    int arr[5]={1,2,20,2,5};
    int result=max_value(arr,0,n);
    cout<<result<<endl;
    return 0;
}