#include<iostream>
using namespace std;
class Test{
    int val;
    public:
    explicit Test(int x){
        val=x;
        cout<<val<<endl;
    }
};
int main(){
    Test obj=100;
    return 0;
}