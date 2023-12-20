//placing nodes at odd places first then nodes at even places
//T.C=O(n)
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
    Node*head;
    Linkedlist(){
        head=NULL;
    }
    void insertAtTail(int val){
        Node*new_node=new Node(val);
        if(head==NULL){//linked list is empty
            head=new_node;
            return;
            
        }
        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;

        }
        temp->next=new_node;
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
Node*oddevenLL(Node*&head){
    
    Node*evenHead=head->next;
    Node*evenptr=evenHead;
    Node*oddptr=head;
    while(evenptr && evenptr->next){
        evenptr->next=evenptr->next->next;
        oddptr->next=oddptr->next->next;
        evenptr=evenptr->next;
        oddptr=oddptr->next;
    }
    
    oddptr->next=evenHead;
    return head;
}
int main(){
    Linkedlist ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);
    ll1.display();
    ll1.head=oddevenLL(ll1.head);
    ll1.display();

}