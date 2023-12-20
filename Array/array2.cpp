#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[]={5,6,10,4,9};
    int b[]={4,2,3,1,5};
    int n=5;
    int m1_idx=-1;
    int m2_idx=-1;
    int min1=999;
    int min2=999;
    int sec_min1=999;
    int sec_min2=999;
    int sec_m1_idx=-1;
    int sec_m2_idx=-1;

    for(int i=0;i<n;i++){
        if(a[i]<min1){
            min1=a[i];
            m1_idx=i;
        }
        if(b[i]<min2){
            min2=b[i];
            m2_idx=i;
        }

    }
    for(int i=0;i<n;i++){
        if(a[i]<sec_min1&&i!=m1_idx){
            sec_min1=a[i];
           sec_m1_idx=i;
        }
        if(b[i]<min2&&i!=m2_idx){
            sec_min2=b[i];
            sec_m2_idx=i;
        }


    }
    if(m1_idx!=m2_idx){
        cout<<min1+min2<<endl;
    }
    else{
        cout<<min(min1+sec_min2,min2+sec_min1)<<endl;
    }

}