#include<iostream>
using namespace std;
void svap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x,y;
    cin>>x>>y;
    int *pt1=&x;
    int*pt2=&y;
    svap(pt1,pt2);
    cout<<x<<" "<<y<<endl;
    return 0;
}