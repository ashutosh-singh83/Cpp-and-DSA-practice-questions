#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && nums[i]+nums[j]==target){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    return 0;
    
    
    
}   