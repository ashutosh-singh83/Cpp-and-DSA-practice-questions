//searches the target element present in array or not
#include<iostream>
using namespace std;
bool search_recursion(int *arr,int idx,int n,int x){
    //base case
    if(idx==n){
        return false;
    }
    return (arr[idx]==x)|| search_recursion(arr,idx+1,n,x);
}
int main(){
    int arr[]={2,6,4,15};
    int n=4;
    int x=4;
    bool result=search_recursion(arr,0,n,x);
    if(result){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}