//reordering LL
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
Node*reorderLL(Node*&head){
    //1.finding middle node
    Node*slow=head;
    Node*fast=head;
    while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    //now slow is pointing to middle node
    //2.split the LL into 2 halves and reverse second half
    Node*curr=slow->next;
    Node*prev=slow;
    slow->next=NULL;
    while(curr){
        Node*nextPtr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextPtr;
    }
    //3.merging the two halves of the LL
    Node*ptr1=head;
    Node*ptr2=prev;
    while(ptr1!=ptr2){
        Node*temp=ptr1->next;
        ptr1->next=ptr2;
        ptr1=ptr2;
        ptr2=temp;

    }
    return head;


}
int main(){
    Linkedlist ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    
    ll1.display();
    ll1.head=reorderLL(ll1.head);
    ll1.display();

}