#include<iostream>
using namespace std;
bool isPowerOf2(int n){
    return(n&&!(n&n-1));
}
int main(){
    cout<<isPowerOf2(32)<<endl;
    cout<<isPowerOf2(15)<<endl;
    cout<<isPowerOf2(16)<<endl;
    return 0;

}