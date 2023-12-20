#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> set1;
    set1.insert(3);
    set1.insert(1);
    set1.insert(2);
    cout<<set1.size()<<endl;
    set1.insert(3);
    cout<<set1.size()<<endl;
    unordered_set<int>::iterator itr;
    //by for loop
    for(itr=set1.begin();itr!=set1.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;
    //by for each loop
    for(auto value:set1){//auto keyword automatically detects datatype of value
        cout<<value<<" ";
    }cout<<endl;
}