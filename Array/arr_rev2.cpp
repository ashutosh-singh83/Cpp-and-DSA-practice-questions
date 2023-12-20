#include<iostream>
using namespace std;
int main(){
    int arr[]={-1,0,1,2,3,4,5,6,7,8};
    int n=10,x=50;
    int i=0,j=n-1;
    bool found =false;
    //to check whether any pair sum equals to x
    while(i<j){
        if(arr[i]+arr[j]==x){
        found=true;
        break;
        }
        else if(arr[i]+arr[j]>x){
            j--;
        }
        else{
            i++;
        }
    }
    if(found){
        cout<<"yes";
    }
    else{
        cout<<"NO"<<endl;

    }
    return 0;
   

}