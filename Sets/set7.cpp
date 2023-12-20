// second largest number
#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<int> s1;
    for(auto ele:v){
        s1.insert(ele);
    }
    auto itr=s1.begin();
    itr++;
    cout<<"Second largest no.="<<*itr<<endl;
    return 0;
}