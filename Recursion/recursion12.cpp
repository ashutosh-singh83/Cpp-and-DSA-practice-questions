//armstrong number
#include<iostream>
using namespace std;
int f(int n){
    //base case
    if(n==0) return 0;
    return ((n%10)*(n%10)*(n%10))+(f(n/10));
}
int main(){
    int n=89;
    int result=f(n);
    if(result==n){
        cout<<"armstrong no.\n";
    }else{
        cout<<"not an armstrong no.\n";
    }
    return 0;
}