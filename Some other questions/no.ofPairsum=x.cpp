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
    int unique_pair=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==key){
                unique_pair++;
            }
        }
    }
    cout<<unique_pair<<endl;
    return 0;
    

}