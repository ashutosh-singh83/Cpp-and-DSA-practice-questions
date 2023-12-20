#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    arr[2]=8;//arrays are immutable means elements can be changed but cannot be inserted or deleted
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}