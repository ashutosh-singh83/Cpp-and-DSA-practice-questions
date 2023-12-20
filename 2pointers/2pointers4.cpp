#include<iostream>
#include<vector>
using namespace std;
void sortedSquares(vector<int> &v,int n){
    vector<int> ans;
    int left_ptr=0;
    int right_ptr=n-1;
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])>abs(v[right_ptr])){
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
        else{
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;

        }
    }
    for(int i=n-1;i>=0;i--){h
        cout<<ans[i]<<" ";
    }cout<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sortedSquares(v,n);
    return 0;
}