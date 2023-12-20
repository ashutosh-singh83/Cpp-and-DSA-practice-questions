#include<iostream>
using namespace std;
void changeval(int &z){
    z=100;
    return;
}
int main(){
    int a=5;
    changeval(a);
    cout<<a<<endl;
    return 0;
}