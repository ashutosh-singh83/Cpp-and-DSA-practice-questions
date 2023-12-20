#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(nums[i]==nums[j]){
                nums[i]=nums[j]=-1;
                j--;
                i=0;
            }else{
                i++;
            }
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]>0){
               return i;
            }
        }
        return nums[i];

}
int main(){
    vector<int> v;
    v={4,1,2,1,2};
    int unique=singleNumber(v);
    cout<<unique<<endl;
    return 0;

}
