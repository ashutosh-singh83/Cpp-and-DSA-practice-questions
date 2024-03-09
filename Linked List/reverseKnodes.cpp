//reversing k nodes at a time in LL
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
Node*reverseKnodesRecursive(Node*&head,int k){
    Node*prevptr=NULL;
    Node*currptr=head;
    int counter=0;//for counting first k nodes
    while(currptr!=NULL&&counter<k){//reversing first k nodes
        Node*nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        counter++;
    }
    //currptr will give us (k+1)th node  
    if(currptr!=NULL){
        Node*new_head=reverseKnodesRecursive(currptr,k);//recursive call
        head->next=new_head;
    }
    return prevptr;//prevptr will give the new head of connected LL
    
}
int main(){
    Linkedlist l1;
    l1.insertAtTail(1);
    
    l1.insertAtTail(2);
    
    l1.insertAtTail(3);
    
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.insertAtTail(6);
    
    l1.display();
    
    l1.head=reverseKnodesRecursive(l1.head,3);
    l1.display();
    


}