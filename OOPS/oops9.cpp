//Runtime polymorphism:-function overriding
#include<iostream>
using namespace std;
class Parent{
    public:
      virtual void print(){
        cout<<"This is parent class "<<endl;
      }
      void show(){
        cout<<"This is parent class "<<endl;
      }
    
};
class child:public Parent{
    public:
      void print(){
        cout<<"This is child class "<<endl;
      }
      void show(){
        cout<<"This is child class "<<endl;
      }
};
int main(){
    Parent *p;
    child c;
    p=&c;
    p->print();
    p->show();
    return 0;
}