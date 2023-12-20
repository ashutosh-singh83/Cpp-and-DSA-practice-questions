#include<iostream>
using namespace std;
int missing(int arr[],int n){
    int missingNum=-1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int range_sum=(n*(n+1))/2;
    missingNum=range_sum-sum;
    return missingNum;
}
int main(){
    int array[]={0,2,3,4,5,6,7};
    int ans=missing(array,7);
    cout<<ans<<endl;
    return 0;

}