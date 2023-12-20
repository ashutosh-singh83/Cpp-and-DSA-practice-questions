// swap zeroes to end
#include<iostream>
using namespace std;
void f(int *arr,int n){
    for(int i=n-1;i>=0;i--){
        int j=0;bool flag=false;
        while(j!=i){
            if(arr[j]==0&&arr[j+1]!=0){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
            j++;
        }
        if(!flag) break;
    }
}
int main(){
    int a[]={-3,2,0,3,0,5};
    int n=6;
    f(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}