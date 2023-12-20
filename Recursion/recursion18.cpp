// program to find all the subsequences of string
#include<iostream>
#include<vector>
using namespace std;
void printsubsequence(string &str,int i,string result,vector<string> &li){
    if(i==str.length()){
        li.push_back(result);
        return;
    }
    printsubsequence(str,i+1,result+str[i],li);
    printsubsequence(str,i+1,result,li);

}
int main(){
    vector<string> res;
    string str="abc";
    printsubsequence(str,0,"",res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}