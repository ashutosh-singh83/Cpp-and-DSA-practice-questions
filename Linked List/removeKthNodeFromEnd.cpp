//to remove kth node from end of linked list
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
//assuming k is always less than length of LL
void removeKthnode(Node*&head,int k){
    //making two pointers pointing to head
    Node*ptr1=head;
    Node*ptr2=head;
    //move ptr2 k steps ahead of head
    while(k--){
        ptr2=ptr2->next;

    }
    //if ptr2 after moving k steps pointing to null
    if(ptr2==NULL){//it means k=length of LL
    //so we have to delete head of LL
        Node*temp=head;
        head->next=head;
        free(temp);
        return;
    }
    //when ptr2 will be at null, the ptr1 will ne at node to be deleted
    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    //now ptr1 is pointing to (k+1)th node from last of LL
    //the node to be deleted is ptr1->next
    Node*temp=ptr1->next;
    ptr1->next=ptr1->next->next;
    free(temp);


}
int main(){
    Linkedlist ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);
    ll1.insertAtTail(7);
    ll1.insertAtTail(8);
    ll1.display();
    removeKthnode(ll1.head,4);
    ll1.display();
    return 0;
}
