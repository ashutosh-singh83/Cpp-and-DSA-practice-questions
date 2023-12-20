//inserting element at bottom in stack
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
void insertAtbottomRecursive(stack<int>&st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int curr=st.top();
    st.pop();
    insertAtbottomRecursive(st,x);
    st.push(curr);
}
void insertatpos(stack<int> &st,int x,int idx){
    int n=st.size();
    stack<int>temp;
    int count=n-idx;
    while(count){
        int curr=st.top();
        st.pop();
        temp.push(curr);
        count--;
    }
    st.push(x);
    while(!temp.empty()){
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }
    return;
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertAtbottom(st,10);
    insertAtbottomRecursive(st,11);
    insertatpos(st,12,3);
    while(!st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;

}