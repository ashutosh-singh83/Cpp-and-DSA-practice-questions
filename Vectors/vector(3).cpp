#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int evenCount=0;
    int oddCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    cout<<"The count of even numbers are : "<<evenCount<<endl;
    cout<<"The count of odd numbers are : "<<oddCount<<endl;
    return 0;
}