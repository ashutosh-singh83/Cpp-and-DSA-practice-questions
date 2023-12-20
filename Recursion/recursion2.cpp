// sum of digits
#include<iostream>
using namespace std;
int sum_of_digits(int n){
    if(n/10==0){
        return n;
    }
    return n%10+sum_of_digits(n/10);
}
int main(){
    int n=193;
    int result=sum_of_digits(n);
    cout<<result;
}