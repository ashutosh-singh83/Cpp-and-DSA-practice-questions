// lexicographical order
#include<iostream>
#include<string.h>
using namespace std;
void selection_sort(char fruits[][60],int n){
    for(int i=0;i<n;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(fruits[min_idx],fruits[j])>0){
                min_idx=j;
            }
        }
        if(i!=min_idx){
            swap(fruits[i],fruits[min_idx]);
        }
    }
}
int main(){
    char fruits[] [60]={"papaya","banana","watermelon","cherry","guava"};
    int n=sizeof(fruits)/sizeof(fruits[0]);
    selection_sort(fruits,n);
    for(int i=0;i<n;i++){
        cout<<fruits[i]<<" ";
    }
    return 0;
}