//rotate 2d array
#include<iostream>
#include<vector>
using namespace std;



void rotateArray(vector<vector<int>> &vec){
    //transpose
    int n=vec.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(vec[i][j],vec[j][i]);
        }
    }
    //reverse every row
    for(int i=0;i<n;i++){
        reverse(vec[i].begin(),vec[i].end());
    }
    return;

}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    } 
    rotateArray(v);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<"";
        }cout<<endl;
    } 

}
