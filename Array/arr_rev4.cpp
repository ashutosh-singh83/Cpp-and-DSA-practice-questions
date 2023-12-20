#include<iostream>
using namespace std;
int main(){
    int arr[]={-6,-3,-2,1,4,5,6};
    int n=7;
    int i=0,j=n-1,k=n-1;
    //code to calculate squares of arr in inc. order
    int result[n];
    while(i<j){
        if(abs(arr[i])>abs(arr[j])){
            result[k]=arr[i]*arr[i];
            i++;
            k--;
        }
        else{
            result[k]=arr[j]*arr[j];
            j--;
            k--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;

}