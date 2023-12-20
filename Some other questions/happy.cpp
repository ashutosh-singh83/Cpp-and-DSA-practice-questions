#include<iostream>
using namespace std;
bool isHappy(int n){
    if(n/10==0){
            if(n==1){
                return true;
            }else{
                return false;
            }
        }
        int sum=0;
        while(n>0){
            int lastdigit=n%10;
            sum+=lastdigit*lastdigit;
            n/=10;
        }
        if(sum==1){
            return true;
        }else{
            isHappy(sum);
        }
}
int main(){
    int n;
    cin>>n;
    bool happy=isHappy(n);
    if(happy){
        cout<<"Yes I am happy\n";
    }else{
        cout<<"No not happy\n";
    }
    return 0;
}