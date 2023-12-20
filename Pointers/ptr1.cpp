#include<iostream>
using namespace std;
void increment(int *a){
    *a++;
}
int main(){
    int a=4;
    increment(&a);
    cout<<a<<endl;
    return 0;
}