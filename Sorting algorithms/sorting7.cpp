// merge sort
#include<iostream>
using namespace std;
void merge(int *arr,int l,int mid,int r){
    int an=mid-l+1;
    int bn=r-mid;
    int a[an],b[bn];
    for(int i=0;i<an;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<bn;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<an&&j<bn){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while(i<an){
        arr[k++]=a[i++];
    }
    while(j<bn){
        arr[k++]=b[j++];
    }
    return;


}
void mergeSort(int *arr,int l,int r){
    //base case
    if(l>=r) return;
    int mid=(l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
    
}
int main(){
    cout<<"Enter size of array:";
    int n;
    cin>>n;
    cout<<"Enter array elements:";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;

}