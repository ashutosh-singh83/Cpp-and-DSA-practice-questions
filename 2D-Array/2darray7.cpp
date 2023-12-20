//rowofmaximum1s
#include<iostream>
#include<vector>
using namespace std;
int row_of_max_ones(vector<vector<int>> &v){
    int maxOnes=-999;
    int rowwith_maxones=-1;
    int columns=v[0].size();
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numberofones=columns-j;
                if(numberofones>maxOnes){
                    maxOnes=numberofones;
                    rowwith_maxones=i;
                }
                break;
            }
        }
    }
    return rowwith_maxones;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int> (m));
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[0].size();j++){
            cin>>vec[i][j];
        }
    }
    int res=row_of_max_ones(vec);
    cout<<res<<endl;
    return 0;

}

