#include<iostream>
using namespace std;
int main(){
    int x=10;
    float y=0;
    int *ptr=&x;
    cout<<"Address stored inside ptr: "<<ptr<<endl;
    cout<<"The value stored inside ptr: "<<*ptr<<endl;//dereference
    float *ptr2=&y;
    cout<<"Address stored inside ptr2: "<<ptr2<<endl;
    cout<<"The valuestored inside ptr2: "<<*ptr2<<endl;
    return 0;
}