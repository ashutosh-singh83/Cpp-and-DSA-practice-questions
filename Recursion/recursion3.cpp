//power using basic approach
#include<iostream>
using namespace std;
int power(int p,int q){
    if(q==0){
        return 1;
    }
    return power(p,q-1)*p;
    
}
int main(){
    int result=power(-1,4);
    cout<<result<<endl;
    return 0;
}