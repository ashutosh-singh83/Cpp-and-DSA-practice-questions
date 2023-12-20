//sum of repetitive elements
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    vector<int> input(7);
    for(int i=0;i<7;i++){
        cin>>input[i];
    }
    map<int,int> m;
    //storing frequency of every element in map
    for(int i=0;i<7;i++){
       int key=input[i];
       m[key]++;
    }
    int sum=0;
    for(auto pair:m){
        if(pair.second>1){
            sum+=pair.first;
        }
    }
    cout<<"ANS:"<<sum<<endl;
}