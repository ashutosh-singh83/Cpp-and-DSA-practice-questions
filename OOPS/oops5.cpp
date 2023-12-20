//types of inheritance
#include<iostream>
using namespace std;
class Parent{
    public:
    Parent(){
        cout<<"This is a parent class"<<endl;
    }
};
class child:public Parent{
    public:
    child(){
        cout<<"This is child"<<endl;
    }
};
// multilevel inheritance
class grandchild:public child{
    public:
    grandchild(){
        cout<<"Grandchild"<<endl;
    }
};
int main(){
    grandchild c;
    return 0;
}