#include<iostream>
using namespace std;
int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;
    int j=l;
    for(;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
int kthsmallest(int arr[],int l,int r,int k){
    if(k>0 && k<=r-l+1){
        int pos=partition(arr,l,r);
        if(pos-l==k-1){
            return arr[pos];
        }
        else if(pos-l>k-1){
            return kthsmallest(arr,l,pos-1,k);
        }
        else{
            return kthsmallest(arr,pos+1,r,k-(pos-l+1));
        }
    }
    else{
        return -1;
    }
}
int main(){
    int arr[]={3,5,2,1,8,9,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    cout<<kthsmallest(arr,0,n-1,k);
    return 0;
}