//print multiples of num upto k
#include<iostream>
using namespace std;
void print_multiples(int num,int k){
    if(k==0)return;
    print_multiples(num,k-1);
    cout<<(num*k)<<" ";
}
int main(){
    print_multiples(8,5);
    return 0;
}