//postfix evaluation
#include<iostream>
#include<stack>

using namespace std;
void postfixEva(string& s){
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0'&&s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            switch(s[i])
            {
                case '+':
                st.push(op1+op2);
                break;
                case '-':
                st.push(op1-op2);
                break;
                case '*':
                st.push(op1*op2);
                break;
                case '/':
                st.push(op1/op2);
                break;
                
                default:
                break;
            }
        }
    }
    cout<<st.top()<<endl;
}
int main(){
    string s="46+2/5*7+";
    postfixEva(s);
    return 0;
}