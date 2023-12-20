#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};
class doublyLL{
    public:
    Node*head;
    Node*tail;
    doublyLL(){
        head=NULL;
        tail=NULL;
    }
    void insertAttail(int val){
        Node*new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->next=NULL;
        new_node->prev=tail;
        tail=new_node;
        return;
    }
    void display(){
        Node*temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }
};
bool isPalindromeDll(Node*&head,Node*&tail){
    while(head!=tail && tail!=head->prev){
        if(head->val!=tail->val){
            return false;
        }
        head=head->next;
        tail=tail->prev;
    }
    return true;
}
int main(){
    doublyLL d1;
    d1.insertAttail(1);
    d1.insertAttail(2);
    d1.insertAttail(3);
    
    d1.insertAttail(3);
    d1.insertAttail(2);
    d1.insertAttail(1);
    d1.display();
    cout<<isPalindromeDll(d1.head,d1.tail);
    
    
    return 0;
}