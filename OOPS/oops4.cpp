#include<iostream>
using namespace std;
class Parent{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};
class child1:public Parent{
    //x will remain public
    //y will remain protected
    //z will be not accessible
};
class child2:protected Parent{
    //x will remain protected
    //y will remain protected
    //z will be not accessible
};
class child3:private Parent{
    //x will remain private
    //y will remain prrivate
    //z will be not accessible
};