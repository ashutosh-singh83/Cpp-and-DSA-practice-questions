#include<iostream>
using namespace std;
void largest_and_smallest(int num1,int num2,int num3){
    int*ptr1=&num1;
    int*ptr2=&num2;
    int*ptr3=&num3;
    int largest;
    int smallest;
    if(*ptr1>*ptr2){
        if(*ptr1>*ptr3){
            largest=*ptr1;
        }
    } 
    else if(*ptr2>*ptr1){
        if(*ptr2>*ptr3){
            largest=*ptr2;
        }


    }
    else{
        largest=*ptr3;
    } 
    
    if(*ptr1<*ptr2){
        if(*ptr1<*ptr3){
            smallest=*ptr1;
        }
    } 
    else if(*ptr2<*ptr1){
        if(*ptr2<*ptr3){
            smallest=*ptr2;
        }


    }
    else{
        smallest=*ptr3;
    } 

        
    cout<<"largest element : "<<largest<<endl;
    cout<<"smallest element : "<<smallest<<endl;
    return;

}
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    largest_and_smallest(n1,n2,n3);
    return 0;
}