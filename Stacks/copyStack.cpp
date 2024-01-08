//copy stack elements in another stack in same order
#include<iostream>
#include<stack>
using namespace std;
stack<int> copystack(stack<int> &input){
    stack<int> temp;
    while(!input.empty()){
        int curr=input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int> result;
    while(!temp.empty()){
        int curr=temp.top();
        temp.pop();
        result.push(curr);
    }
    return result;

}
void copystackRecursive(stack<int> &input,stack<int> &res){
    if(input.empty()) return;
    int curr=input.top();
    input.pop();
    copystackRecursive(input,res);
    res.push(curr);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> res;
    copystackRecursive(st,res);
    while(!res.empty()){
        int curr=res.top();
        res.pop();
        cout<<curr<<endl;
    }
    return 0;

}