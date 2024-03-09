//reverse the linked list
#include<iostream>
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
class Linkedlist{
  public:
    Node *head;
    Linkedlist(){
        head=NULL;
    }
    void insertAtTail(int val){
        Node*new_node=new Node(val);
        if(head==NULL){ //linked list is empty
            head=new_node;
            return;
        }    
        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        //temp is pointing to last node
        temp->next=new_node;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

};
Node*reverseLL(Node*&head){
    Node*prev=NULL;
    Node*curr=head;
    //curr->next=prev
    //move all pointers one step ahead
    while(curr!=NULL){
        Node*next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

    }
    //when this loop ends prev pointer is pointing to the last node
    Node*new_head=prev;
    return new_head;
}
Node*reverseLLRecursive(Node*&head){
    //base case
    if(head==NULL||head->next==NULL){
        return head;
    }
    //recursive case
    Node*new_head=reverseLLRecursive(head->next);
    head->next->next=head;
    head->next=NULL;//head is now pointing to last node in reverseLL
    return new_head;
}
int main(){
    Linkedlist l1;
    l1.insertAtTail(1);
    
    l1.insertAtTail(2);
    
    l1.insertAtTail(4);
    
    l1.insertAtTail(3);
    
    l1.display();
    
    l1.head=reverseLLRecursive(l1.head);
    l1.display();
    


}