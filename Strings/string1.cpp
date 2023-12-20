#include<iostream>
#include<vector>
#include<string>
using namespace std;
string countsort(string str){
    vector<int> freq(26,0);
    //storing frequency of every character
    for(int i=0;i<str.size();i++){
        int index=str[i]-'a';
        freq[index]++;
    }
    //creating sorted string
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j++]=i+'a';

        }
    }
    return str;
}
int main(){
    string str;
    cout<<"Enter your string:";
    cin>>str;
    
    cout<<countsort(str)<<endl;
    return 0;

}