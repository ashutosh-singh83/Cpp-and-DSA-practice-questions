#include<iostream>
#include<string>
using namespace std;
int longestOnes(string s,int k){
    int start=0;
    int end=0;
    int zero_count=0;
    int max_len=0;
    for(;end<s.size();end++){
        if(s[end]=='0'){
            zero_count++;
        }
        while(zero_count>k){
            if(s[start]=='0'){
                zero_count--;
                    
            }
            start++;
        }
        max_len=max(max_len,end-start+1);
    }
    
    return max_len;
}
int main(){
    string str;
    cout<<"Enter binary string:";
    cin>>str;
    int k;
    cout<<"Enter no. of flips:";
    cin>>k;
    cout<<longestOnes(str,k)<<endl;
    return 0;

}