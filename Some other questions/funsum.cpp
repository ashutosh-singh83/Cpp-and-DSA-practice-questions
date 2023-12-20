#include<iostream>
using namespace std;
int sum(int n){
    int ans1=0;
    for(int i=1;i<=n;i++){
        ans1+=i;

    }
    return ans1;
}
int main(){
    int n;
    cin>>n;
    int ans=sum(n);
    cout<<ans<<endl;
    return 0;

}