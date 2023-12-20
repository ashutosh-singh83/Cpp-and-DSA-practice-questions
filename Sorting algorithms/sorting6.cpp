//merge sorted arrays
#include<iostream>
using namespace std;
void mergearrays(int arr1[],int n1,int arr2[],int n2,int arr3[]){
    int a=0;
    int b=0;
    int c=0;
    while(a<n1&&b<n2){
        if(arr1[a]<arr2[b]){
            arr3[c++]=arr1[a++];
        }else{
            arr3[c++]=arr2[b++];
        }
    }
    while(a<n1){
        arr3[c++]=arr1[a++];
    }
    while(b<n2){
        arr3[c++]=arr2[b++];
    }
    
}
int main(){
    int arr1[]={2,4,6,8};
    int arr2[]={1,3,5,7};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n1+n2];
    mergearrays(arr1,n1,arr2,n2,arr3);
    for(int i=0;i<n1+n2;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;

}