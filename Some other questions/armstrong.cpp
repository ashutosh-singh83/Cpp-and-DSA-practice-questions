#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int original=n;
    while(n>0){
        int lastDigit=n%10;
        sum+=lastDigit*lastDigit*lastDigit;
        n=n/10;
    }
    if(sum==original){
        cout<<"Armstrong no."<<endl;
    }else{
        cout<<"Not an armstrong no."<<endl;
    }
    return 0;
}