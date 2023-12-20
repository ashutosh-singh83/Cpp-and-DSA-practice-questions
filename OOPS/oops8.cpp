// operator overloading
#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int img;
    complex(int x,int y){
        real=x;
        img=y;
    }
    complex operator +(complex &c){
        complex ans(0,0);
        ans.real=real+c.real;//real part of c1+real part of c2
        ans.img=img+c.img;
        return ans;
    }

};
int main(){
    complex c1(1,2);
    complex c2(2,5);
    complex c3=c1+c2;//c1 is passing as object and c2 as argument
    cout<<c3.real<<"+"<<c3.img<<"i"<<endl;
    complex c4=c1+c2+c3;
    cout<<c4.real<<"+"<<c4.img<<"i"<<endl;
    return 0;

}