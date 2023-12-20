// no. of possible paths from top left to bottom right in a matrix
#include<iostream>
using namespace std;
int f(int i,int j,int m,int n){
    if(i==m-1 && j==n-1){
        return 1;
    }
    if(i>=m||j>=n) return 0;
    return f(i+1,j,m,n)+f(i,j+1,m,n);

}
int main(){
    int m=4;
    int n=4;
    cout<<"No.of possible parhs is:"<<f(0,0,m,n)<<"\n";
    return 0;

}

