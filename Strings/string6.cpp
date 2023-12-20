//longest common prefix second method
#include<iostream>
#include<string>
#include<vector>
using namespace std;
string longestCmnPrefix(vector<string> &str){
    string s1=str[0];
    int ans_len=s1.size();
    for(int i=0;i<str.size();i++){
        int j=0;
        while(j<s1.size()&&j<str[i].size()&&s1[j]==str[i][j]){
            j++;

        }
        ans_len=min(ans_len,j);
    }
    return s1.substr(0,ans_len);
}
int main(){
    int n;
    cout<<"Enter no. of strings:\n";
    cin>>n;
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<longestCmnPrefix(str)<<endl;
    return 0;

}