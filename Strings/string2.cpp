//Anagram
#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isAnagram(string s1,string s2){
    //making frequency vector
    vector<int> freq(26,0);
    //checking the sizes of both strings
    if(s1.size()!=s2.size()){
        return false;
    }
    
    //filling the frequency array
    for(int i=0;i<s1.size();i++){
        freq[s1[i]-'a']++;
        freq[s2[i]-'a']--;
    }
    //checking all the digits in frequency array are zero
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    bool b=isAnagram(s1,s2);
    b?cout<<"Yes":cout<<"Not";
}