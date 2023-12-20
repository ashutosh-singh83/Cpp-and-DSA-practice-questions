//print sequence upto n
#include<iostream>
using namespace std;
void printincreasing(int n){
    if(n<1) return;
    printincreasing(n-1);
    cout<<n<<" ";
}
int main(){
    printincreasing(20);
    return 0;
}