#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    cin>>x>>y;
    int *ptr=&x;
    int* ptr2=&y;
    int result;
    int *ptr_result=&result;
    *ptr_result=*ptr+*ptr2;
    cout<<result<<" "<<*ptr_result<<endl;
    return 0;

}