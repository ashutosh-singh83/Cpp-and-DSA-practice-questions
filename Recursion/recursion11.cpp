//sum of first n natural numbers with alternate signs
#include<iostream>
using namespace std;
int sum(int n){
    //base case
    if(n==0) return 0;
    return sum(n-1)+((n%2==0)?(-n):(n));

}
int main(){
    int isSum=sum(10);
    cout<<isSum<<endl;
    return 0;

}