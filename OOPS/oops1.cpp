#include<iostream>
using namespace std;
class Fruit{
    public:
    string name;
    string color;
};
int main(){
    Fruit apple;//object
    apple.name="Apple";
    apple.color="Red";
    cout<<apple.name<<" "<<apple.color<<endl;

    Fruit *mango=new Fruit();//object
    mango->name="MANGO";
    mango->color="YELLOW";
    cout<<mango->name<<" "<<mango->color<<endl;

    return 0;
}