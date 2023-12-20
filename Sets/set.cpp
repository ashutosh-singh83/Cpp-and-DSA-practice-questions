#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> set1;
    //set<int,greater<int>> set1; for descending order
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
    cout<<set1.size()<<endl;
    set1.insert(3);
    cout<<set1.size()<<endl;
    set<int>::iterator itr;
    //by for loop
    for(itr=set1.begin();itr!=set1.end();itr++){
        cout<<*itr<<" ";
    }cout<<endl;
    //by for each loop
    for(auto value:set1){//auto keyword automatically detects datatype of value
        cout<<value<<" ";
    }cout<<endl;
}