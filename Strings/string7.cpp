#include<iostream>
#include<string>
using namespace std;
void reverse(string &st){
    int i=0;
    int j=st.size()-1;
    while(i<j){
        swap(st[i++],st[j--]);
    }
    return;

}
string decodedString(string str){
    string result="";
    for(int i=0;i<str.size();i++){
        if(str[i]!=']'){
            result.push_back(str[i]);
        }else{
            string s="";
            while(!(result.empty())&&result.back()!='['){
                s.push_back(result.back());
                result.pop_back();

            }
            reverse(s);
            result.pop_back();
            string num="";
            while(!result.empty()&&result.back()>='0'&&result.back()<='9'){
                num.push_back(result.back());
                result.pop_back();
            }
            reverse(num);
            int num_int=stoi(num);
            while(num_int){
                result+=s;
                num_int--;

            }


        }
    }
    return result;
}
int main(){
    string st;
    cout<<"Enter your string:\n";
    cin>>st;
    cout<<decodedString(st)<<endl;
    return 0;
}