#include<iostream>
using namespace std;
int main(){
    int arr[]={2,2,2,2};
    int n=4,x=4;
    int i=0,j=n-1;
    int answer=0;
    //to find no. of unique pairs whose sum equals to x
    while(i<j){
        if(arr[i]+arr[j]==x){
        answer++;
           i++;
           j--;
        }
        else if(arr[i]+arr[j]>x){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"The unique pair no. is:"<<answer<<endl;
    return 0;
   

}