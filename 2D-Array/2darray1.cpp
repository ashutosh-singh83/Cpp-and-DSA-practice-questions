//matrix multiplication
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter r1 and c1\n";
    int r1,c1;
    cin>>r1>>c1;
    cout<<"Enter elements of m1\n";
    int m1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"Enter r2 and c2\n";
    int r2,c2;
    cin>>r2>>c2;
    cout<<"Enter elements of m2\n";
    int m2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>m2[i][j];
        }
    }

    if(c1!=r2){
        cout<<"Matrix multiplication not possible"<<endl;
    }
    else{
        int C[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value=0;
            for(int k=0;k<r2;k++){
                value += m1[i][k]*m2[k][j];
            }
            C[i][j]=value;

        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
      
    }
    



}