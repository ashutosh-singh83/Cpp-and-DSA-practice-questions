#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<string,int> dir;
    dir.insert(make_pair("A",8765));
    dir.insert(make_pair("B",965));
    dir.insert(make_pair("E",875));
    dir.insert(make_pair("B",567));
    //dir["D"]=98765;not allowed
    for(auto ele:dir){
        cout<<ele.first<<":";
        cout<<ele.second<<endl;
    }
    return 0;
}