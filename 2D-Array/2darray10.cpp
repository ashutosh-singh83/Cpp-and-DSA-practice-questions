//create spiral matrix
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<vector<int>> matrix(n,vector<int>(n));

    int left=0,top=0,right=n-1,bottom=n-1;
    
    int value=1;
    int direction=0;
    while(left<=right && top<=bottom){
        //left to right
        if(direction==0){
            for(int col=left;col<=right;col++){
                matrix[top][col]=value++;
            }
            top++;
        }
        //top to bottom
        else if(direction==1){
            for(int row=top;row<=bottom;row++){
                matrix[row][right]=value++;
            }
            right--;
        }
        //right to left
        else if(direction==2){
            for(int col=right;col>=left;col--){
                matrix[bottom][col]=value++;
            }
            bottom--;
        }
        //bottom to top
        else{
            for(int row=bottom;row>=top;row--){
                matrix[row][left]=value++;
            }
            left++;
        }
        direction=(direction+1)%4;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
   
}