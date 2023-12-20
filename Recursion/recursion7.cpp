// remove a particular char from string recursively
#include<iostream>
using namespace std;
string remove_char(string &s,int idx,int n){
    if(idx==n)return "";
    
    if(s[idx]=='c'){
        return ""+remove_char(s,idx+1,n);
    }
    else{
        return s[idx]+remove_char(s,idx+1,n);
    }
}
int main(){
    string s="abcxa";
    int n=5;
    s=remove_char(s,0,n);
    cout<<s<<endl;
    return 0;
}