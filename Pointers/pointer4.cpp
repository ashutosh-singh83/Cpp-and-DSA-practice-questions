#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int*ptr1=&n1;
    int*ptr2=&n2;
    cout<<"Entered value"<<endl;
    cout<<"n1="<<*ptr1<<endl;
    cout<<"n2="<<*ptr2<<endl;
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    cout<<"after swapping "<<endl;
    cout<<"n1="<<*ptr1<<endl;
    cout<<"n2="<<*ptr2<<endl;
    return 0;

}