#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"The size of the vector is : "<<v.size()<<endl;
    cout<<"The capacity of the vector is : "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"The size of the vector is : "<<v.size()<<endl;
    cout<<"The capacity of the vector is : "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"The size of the vector is : "<<v.size()<<endl;
    cout<<"The capacity of the vector is : "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"The size of the vector is : "<<v.size()<<endl;
    cout<<"The capacity of the vector is : "<<v.capacity()<<endl;
    v.resize(5);
    cout<<"The size of the vector is : "<<v.size()<<endl;
    cout<<"The capacity of the vector is : "<<v.capacity()<<endl;
    v.resize(20);
    cout<<"The size of the vector is : "<<v.size()<<endl;
    cout<<"The capacity of the vector is : "<<v.capacity()<<endl;
    
    v.pop_back();
    cout<<"The size of the vector is : "<<v.size()<<endl;
    cout<<"The capacity of the vector is : "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"The size of the vector is : "<<v.size()<<endl;
    cout<<"The capacity of the vector is : "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"The size of the vector is : "<<v.size()<<endl;
    cout<<"The capacity of the vector is : "<<v.capacity()<<endl;

    return 0;


}