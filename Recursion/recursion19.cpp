// mobile keypad
// all combinations of number typed
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void f(string s,int i,string result,vector<string> &ans,vector<string> &v){
    if(i==s.size()){
        ans.push_back(result);
        return;
    }
    int digit=s[i]-'0';
    if(digit<=1){
        f(s,i+1,result,ans,v);
        return;
    }
    for(int j=0;j<v[digit].size();j++){
        f(s,i+1,result+v[digit][j],ans,v);
        
    }
    return;



}
int main(){
    vector<string> v(10);
    v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string s="23";
    vector<string> ans;
    f(s,0,"",ans,v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}