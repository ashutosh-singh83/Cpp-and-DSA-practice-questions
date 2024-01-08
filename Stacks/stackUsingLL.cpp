//stack implementation using LL
#include<iostream>
#include<climits>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int data){
        val=data;
        next=NULL;
    }
};
class Stack{
    Node*head;
    int capacity;
    int currSize;
    public:
    Stack(int c){
        capacity=c;
        head=NULL;
        currSize=0;
    }
    bool isEmpty(){
        return head==NULL;
    }
    bool isFull(){
        return currSize==capacity;
    }
    void push(int data){
        if(currSize==capacity){
            cout<<"overflow"<<endl;
            return;
        }
        Node*new_node=new Node(data);
        new_node->next=head;
        head=new_node;
        currSize++;
    }
    int pop(){
        if(head==NULL){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        Node*temp=head;//node to be deleted
        int result=temp->val;
        head=head->next;
        free(temp);
        currSize--;
        return result;

    }
    int size(){
        return currSize;
    }
    int getTop(){
        if(head==NULL){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        return head->val;
    }
};
int main(){
    Stack st(5);
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.pop();
    cout<<st.getTop()<<endl;
    cout<<st.size()<<endl;
    
    cout<<st.isFull()<<endl;
    
    
    
    
    cout<<st.getTop()<<endl;

}