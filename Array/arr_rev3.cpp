#include<iostream>
using namespace std;
int main(){
    int arr[]={1,10,20,30};
    int n=4,x=5;
    int i=0,j=1;
    bool found =false;
    //to check whether any pair difference equals to x
    while(i<n and j<n){
        if(abs(arr[i]-arr[j])==x){
          found=true;
          break;
        }
        else if(abs(arr[i]-arr[j])>x){
            i++;
        }
        else{
            j++;

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