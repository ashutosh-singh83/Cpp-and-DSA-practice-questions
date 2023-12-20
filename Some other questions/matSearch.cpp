#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int key;
    cin>>key;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    
    bool found=false;
    int r=0,c=m-1;
    while(r<m && c>=0){
        if(mat[r][c]==key){
            found=true;
        }
        else if(mat[r][c]>key){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"Element exist"<<endl;
    }
    else{
        cout<<"Element does not exist"<<endl;
    }
    return 0;
}