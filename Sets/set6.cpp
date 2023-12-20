#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_multiset<int> set1;
    //multiset<int,greater<int>> set1; for descending order
    set1.insert(3);
    set1.insert(2);
    set1.insert(0);
    set1.insert(5);
    set1.insert(3);
    
    //by for each loop
    for(auto value:set1){//auto keyword automatically detects datatype of value
        cout<<value<<" ";
    }cout<<endl;
}