//to find gcd
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b>a) return gcd(b,a);
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    cout<<gcd(12,15)<<endl;
    return 0;
}