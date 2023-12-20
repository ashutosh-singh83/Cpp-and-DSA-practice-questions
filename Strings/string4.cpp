//longest prefix string
//T.C:-O(nlogn*m)
#include<iostream>
#include<vector>
#include<string>
using namespace std;

string longestPrefixSum(vector<string> &str){
    sort(str.begin(),str.end());//nlogn
    string s1=str[0];
    int i=0;
    string s2=str[str.size()-1];
    int j=0;

    string ans="";
    while(i<s1.size()&&j<s2.size()&&s1[i]==s2[j]){//m=general length of string
        
            ans+=s1[i];
            i++;
            j++;

    }
        

    
    return ans;

}
int main(){
    int n;
    cout<<"Enter no. of strings\n";
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cout<<longestPrefixSum(s)<<endl;
}