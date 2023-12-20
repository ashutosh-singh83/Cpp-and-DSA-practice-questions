// sum of each subset using recursion
#include<iostream>
#include<vector>
using namespace std;
void f(int *arr,int i,int n,int sum,vector<int> &result){
    if(i==n){
        result.push_back(sum);
        return;


    }
    f(arr,i+1,n,sum+arr[i],result);
    f(arr,i+1,n,sum,result);
    
}
int main(){
    int arr[]={1,2};
    int n=2;
    vector<int> result;
    f(arr,0,n,0,result);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}