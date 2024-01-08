//infix to prefix expression
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int prec(char c){//finding precedence of operators
    if(c=='^'){
        return 3;
    }
    else if(c=='*'||c=='/'){
        return 2;
    }
    else if(c=='+'||c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
void infixToPrefix(string &s){
    reverse(s.begin(),s.end());

    string res="";
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
            res+=s[i];
        }
        else if(s[i]==')'){
            st.push(s[i]);
        }else if(s[i]=='('){
            while(!st.empty()&&st.top()!=')'){
                 res+=st.top();
                 st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty()&&prec(s[i])<=prec(st.top())){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    if(!st.empty()){
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;
}
    
int main(){
    string s="(a-b/c)*(a/k-l)";
    infixToPrefix(s);

}