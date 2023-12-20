#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string> dir;
    dir.insert(make_pair(3,"ria"));
    dir.insert(make_pair(1,"pia"));
    dir.insert(make_pair(2,"tia"));
    dir.insert(make_pair(3,"kia"));//this will not change anything
    for(auto ele:dir){
        cout<<"Roll_no.-"<<ele.first<<"";
        cout<<"Name:"<<ele.second<<endl;
    }
    cout<<endl;
    dir[3]="kia";//this will change
    for(auto ele:dir){
        cout<<"Roll_no.-"<<ele.first<<"";
        cout<<"Name:"<<ele.second<<endl;
    }
    return 0;
}