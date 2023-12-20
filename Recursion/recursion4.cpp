//optimized approach for calculating power
#include<iostream>
using namespace std;
int power(int p,int q){
    int result=0;
    if(q==0){
        return 1;
    }
    if(q%2==0){
        result=power(p,q/2);
        return result*result;
    }
    else{
        result=power(p,(q-1)/2);
        return p*result*result;
    }

}
int main(){
    int result=power(4,4);
    cout<<result<<endl;
    return 0;
}