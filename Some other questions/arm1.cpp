#include<iostream>

using namespace std;
 int main(){
    int n;
    cin>>n;
    int sum=0;
    int original =n;
    while(n>0){
        int lastDigit=n%10;
        sum+=lastDigit*lastDigit*lastDigit;
        n/=10;

    }
    if(sum==original){
        cout<<"Armstrong n0."<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
 }