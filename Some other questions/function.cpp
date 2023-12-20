#include<iostream>
using namespace std;
void sqr_5(){
    for(int i=1;i<=5;i++){
        cout<<i*i<<" ";
    }
    cout<<endl;
}
void area(int r){
    cout<<"Area is:"<<3.14*r*r<<endl;
}
void circumference(int r){
    cout<<"circumference is:"<<3.14*2*r<<endl;
}
void eligToVote(int age){
    if(age>=18){
        cout<<"Eligible to vote"<<endl;
    }
    else{
        cout<<"Not eligible"<<endl;
    }
}
void oddNumInRange(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
        else{
            continue;
        }
    }
    cout<<"\n";
}
void primeNumInRange(int a,int b){
    for(int i=a;i<=b;i++){
        bool flag=false;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=true;
                break;
            }else{
                continue;
            }
        }
        if(!flag){
            cout<<i<<" ";
        }

    }
}

int main(){
    sqr_5();
    area(5);
    circumference(5);
    
    oddNumInRange(2,3);
    primeNumInRange(1,15);
    return 0;
}

