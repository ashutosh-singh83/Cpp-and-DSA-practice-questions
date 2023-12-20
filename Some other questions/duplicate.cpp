#include<iostream>
using namespace std;

    bool containsDuplicate(int nums[],int n) {
        bool flag=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && nums[i]==nums[j]){
                    flag=true;
                }
            }
        }
        return flag;
    }

int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    cout<<containsDuplicate(nums, n)<<endl;
    return 0;
}