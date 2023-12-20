#include<iostream>
using namespace std;
class Weight{
    int kg;
    public:
    Weight(){
        kg=0;
    }
    Weight(int x){
        kg=x;
    }
    void print(){
        cout<<"The weight is:"<<kg<<" kg"<<endl;

    }
    void operator ++(){
        ++kg;
    }
    Weight operator ++(int){
        Weight temp;
        temp.kg=++kg;
        return temp;
    }

};
int main(){
    Weight obj1(5);
    obj1.print();
    ++obj1;
    obj1.print();
    Weight obj1,obj2;
    obj2=++obj1;
    obj1.print();

    
    return 0;

}