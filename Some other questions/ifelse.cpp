#include<iostream>
using namespace std;
int main(){
    int savings;
    cin>>savings;

    if(savings>5000){
        if(savings>10000){
            cout<<"Roadtrip with Neha\n";

        }else{
            cout<<"Shoppping with neha\n";
        }
    }else if(savings>2000){
        cout<<"go with rashmi\n";
    }else{
        cout<<"Go with friends\n";
    }
    return 0;
}