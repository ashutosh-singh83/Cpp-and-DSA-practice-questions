#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int *ptr1=&n1;
    int *ptr2=&n2;
    int product;
    int *pro=&product;
    *pro=(*ptr1)*(*ptr2);
    cout<<*pro<<endl;
    return 0;


}