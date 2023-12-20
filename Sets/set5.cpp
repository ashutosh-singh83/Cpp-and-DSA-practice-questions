#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> set1;
    //multiset<int,greater<int>> set1; for descending order
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
    cout<<set1.size()<<endl;
    set1.insert(3);
    cout<<set1.size()<<endl;
    //by for each loop
    for(auto value:set1){//auto keyword automatically detects datatype of value
        cout<<value<<" ";
    }cout<<endl;
}