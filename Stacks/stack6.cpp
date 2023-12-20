//reversing a stack in the same stack
#include<iostream>
#include<stack>
using namespace std;
void insertAtbottom(stack<int>&st,int x){
    stack<int> temp;
    while(!st.empty()){
        //copying all elements into temp
        int curr=st.top();
        st.pop();
        temp.push(curr);
    }
    temp.push(x);
    while(!temp.empty()){
        //copying all elements into temp
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }

}
void reverseRecursive(stack<int>&st){
    if(st.empty()) return;
    int curr=st.top();
    st.pop();
    reverseRecursive(st);
    insertAtbottom(st,curr);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverseRecursive(st);
    while(!st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}