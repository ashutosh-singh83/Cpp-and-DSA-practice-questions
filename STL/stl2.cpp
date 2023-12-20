#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l1={1,2,3,4};
    auto itr=l1.begin();
    //cout<<*itr<<endl;
    advance(itr,3);
   // cout<<*itr<<endl;
   // using range based loop
    for(auto num:l1){
        cout<<num<<" ";
    }cout<<endl;
    //using iterators
    for(auto itr=l1.begin();itr!=l1.end();itr++){
        cout<<*itr<<" "; 
    }cout<<endl;
    //reverse traversal
    for(auto itr=l1.rbegin();itr!=l1.rend();itr++){
        cout<<*itr<<" "; 
    }cout<<endl;
    list<int> l2={6,7,8,9};
    auto itr1=l2.begin();
    advance(itr1,2);
    l2.insert(itr1,5);
    for(auto itr1=l2.begin();itr1!=l2.end();itr1++){
        cout<<*itr1<<" "; 
    }cout<<endl;
    l2.insert(itr1,3,5);
    for(auto itr1=l2.begin();itr1!=l2.end();itr1++){
        cout<<*itr1<<" "; 
    }cout<<endl;
    auto l=l2.begin();
    auto r=l2.begin();
    advance(r,3);
    l2.insert(itr1,l,r);
    for(auto itr1=l2.begin();itr1!=l2.end();itr1++){
        cout<<*itr1<<" "; 
    }cout<<endl;
    
}