#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<"Now a="<<a<<endl;
    cout<<"Now b="<<b<<endl;

}