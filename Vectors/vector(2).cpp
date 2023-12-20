#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"Enter key value: "<<endl;
    int x;
    cin>>x;
    int occurence=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence++;
        }

    }
    cout<<occurence<<endl;
    return 0;

}