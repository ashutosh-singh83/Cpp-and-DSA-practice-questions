//rectangle sum by doing prefix sum row wise and column wise
#include<iostream>
#include<vector>
using namespace std;
int rectangleSum(vector<vector<int>> &v,int l1,int r1,int l2,int r2){
    int sum=0;
    //prefix sum array row-wise
    for(int i=0;i<v.size();i++){
        for(int j=1;j<v[0].size();j++){
            v[i][j]+=v[i][j-1];

        }
    }
    //prefix sum array column-wise
    for(int i=1;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            v[i][j]+=v[i-1][j];
        }
    }
    //printing prefix sum array
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";

        }cout<<endl;
    }

    int top_sum=0,left_sum=0,topleft_sum=0;
    if(l1!=0) top_sum=v[l1-1][r2];
    if(r1!=0) left_sum=v[l2][r1-1];
    if(l1!=0 && r1!=0) topleft_sum=v[l1-1][r1-1];
    sum=v[l2][r2]-top_sum-left_sum+topleft_sum;
    return sum;

}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;
    int sum=rectangleSum(matrix,l1,r1,l2,r2);
    cout<<sum<<endl;
    return 0;
}