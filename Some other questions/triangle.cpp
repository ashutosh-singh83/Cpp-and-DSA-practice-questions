#include<iostream>
using namespace std;
int main(){
    int sidea,sideb,sidec;
    cout<<"Enter the length of three sides of atriangle\n";
    cin>>sidea>>sideb>>sidec;

    if(sidea==sideb&&sideb==sidec){
        cout<<"Equilateral triangle\n";
    }else if(sidea==sideb||sideb==sidec||sidea==sidec){
        cout<<"Isosceles\n";
    }else{
        cout<<"Scalene";
    }return 0;
}