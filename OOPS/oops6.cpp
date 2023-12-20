//multiple
#include<iostream>
using namespace std;
class parent1{
    public:
    parent1(){
        cout<<"parent1"<<endl;

    }
};
class parent2{
    public:
    parent2(){
        cout<<"parent2"<<endl;

    }
};
class child:public parent1,public parent2{
    public:
    child(){
        cout<<"child"<<endl;

    }
};

int main(){
    child c;
    return 0;
    

}