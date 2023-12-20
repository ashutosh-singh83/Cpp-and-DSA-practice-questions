#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="wertyiuiophddgjj";
    //cout<<'a'-'A'<<endl;=32
    //for lower to upper
  /*  for(int i=0;i<str.size();i++){
      if(str[i]>='a'&&str[i]<='z'){
           str[i]-=32;
        }
        
    }
    cout<<str<<endl;
    //for upper to lower
    for(int i=0;i<str.size();i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]+=32;
        }
        
    }
    cout<<str<<endl;*/
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;
    return 0;

}