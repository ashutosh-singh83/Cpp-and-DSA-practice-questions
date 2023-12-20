#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int key;
    cin>>key;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==key){
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"Yes\n"<<endl;
    }
    else{
        cout<<"No\n"<<endl;
    }
    return 0;
    

}