#include<iostream>
using namespace std;
int main(){
    int i=10,j=20,k;
    //10    //9   //19  19    9
    k=i-- - i++ + --j + j++ - --i;
    
    cout<<i<<endl;//9
    cout<<j<<endl;//20
    cout<<k<<endl;//30

    return 0;
}