#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=0;k<2*i-1;k++){
            char ch=(char)('A'+k);
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=0;k<2*i-1;k++){
            char ch=(char)('A'+k);
            cout<<ch<<" ";
        }
        cout<<"\n";
    }

}