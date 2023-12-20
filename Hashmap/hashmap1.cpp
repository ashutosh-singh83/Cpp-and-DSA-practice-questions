#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int,greater<int>> dir;
    dir["Ashutosh"]=123;
    dir["Gaurav"]=123;
    dir["Siya"]=123;
    dir["Om"]=124;
    for(auto ele:dir){
        cout<<ele.first<<":";
        cout<<ele.second<<endl;
    }
    dir["Om"]=234;
    for(auto ele:dir){
        cout<<ele.first<<":";
        cout<<ele.second<<endl;
    }
    cout<<endl;
    map<string,int>::reverse_iterator itr;
    for(itr=dir.rbegin();itr!=dir.rend();itr++){
        cout<<itr->first<<"-"<<itr->second<<endl;
    }
    return 0;
}