#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    
    cout<<st.empty()<<endl;
    
    
    
    
    cout<<st.top()<<endl;
}