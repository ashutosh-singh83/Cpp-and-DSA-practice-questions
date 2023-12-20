#include<iostream>
#include<climits>
using namespace std;
int main(){
    int  n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=-1;
    int i;
    for( i=1;i<n-1;i++){
        int maximum=INT_MIN;
        for(int j=0;j<i;j++){
            maximum=max(maximum,arr[j]);
        }
        int minimum=INT_MAX;
        for(int j=i+1;j<n;j++){
            minimum=min(minimum,arr[j]);
        }
        if(arr[i]>maximum && arr[i]<minimum){
            ans=arr[i];
        }
        
    }
    cout<<ans<<endl;
    
    return 0;
}