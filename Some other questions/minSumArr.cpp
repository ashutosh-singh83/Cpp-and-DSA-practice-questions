#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[]={10,20,9,3,5};
    int b[]={1,2,3,4,5};
    int min1=INT_MAX;
    int min2=INT_MAX;

    for(int i=0;i<5;i++){
        min1=min(min1,a[i]);
        min2=min(min2,b[i]);
    }
    cout<<min1+min2<<endl;
    return 0;

}