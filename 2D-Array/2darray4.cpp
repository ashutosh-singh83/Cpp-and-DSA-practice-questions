//pascal triangle
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
#include<iostream>
#include<vector>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
vector<vector<int>> pascal(int n){
    vector<vector<int>> pas(n);
    for(int i=0;i<n;i++){\
        pas[i].resize(i+1);
        for(int j=0;j<i+1;j++){
            
                pas[i][j]=fact(i)/(fact(i-j)*fact(j));

            
            
        }
    }
    return pas;
}
int main(){
    
    vector<vector<int>> ans;
    ans=pascal(5);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;

    }
    return 0;

}