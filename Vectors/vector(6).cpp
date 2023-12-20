#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int k;
    cin>>k;
    k%=n;

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    return 0;
    


}
