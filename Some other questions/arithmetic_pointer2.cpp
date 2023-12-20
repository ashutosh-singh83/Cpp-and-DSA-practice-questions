#include<iostream>
using namespace std;
int main(){
    int arr[2]={1,8};
    int *ptr=&arr[0];
    cout<<++*ptr<<endl;//2
    cout<<arr[0]<<" "<<arr[1]<<endl;//2 8

}
