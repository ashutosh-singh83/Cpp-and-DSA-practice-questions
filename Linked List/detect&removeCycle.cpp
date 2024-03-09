//to find if there is a cycle or not in a LL
//remove cycle if exists
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
//if pointer slow and fast equals at some point then there exists a cycle in LL
bool detectCycle(Node*&head){
    Node*slow=head;
    Node*fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<slow->val<<endl;
            return true;
        }
    }
    return false;
}
//removing cycle by using floyds algorithm
void removeCycle(Node*&head){//assuming LL has cycle
    Node*slow=head;
    Node*fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    fast=head;
    while(fast->next!=slow->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
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
    ll1.head->next->next->next->next->next->next=ll1.head->next->next;
    cout<<detectCycle(ll1.head)<<endl;
    removeCycle(ll1.head);
    cout<<"after removing cycle:"<<endl;
    cout<<detectCycle(ll1.head)<<endl;
    ll1.display();
    return 0;
}