//circular linked list
#include<iostream>
#include<vector>
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
class circularLL{
    public:
    Node*head;
    circularLL(){
        head=NULL;
    }
    void insertAtStart(int val){
        Node*new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            new_node->next=head;
            return;
        }
        Node*tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        //now tail is pointing to last node
        tail->next=new_node;
        new_node->next=head;
        head=new_node;
    }
    void insertAtTail(int val){
        Node*new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            new_node->next=head;
            return;
        }
        Node*tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        //now tail is pointing to last node
        tail->next=new_node;
        new_node->next=head;
        
    }
    void display(){
        Node*temp=head;
        do{
            cout<<temp->val<<"->";
            temp=temp->next;

        }while(temp!=head);
        cout<<endl;
    }
    void deleteatStart(){
        if(head==NULL){
            return;
        }
        Node*temp=head;
        Node*tail=head;
        while(tail->next!=head){
           tail=tail->next;
        }
        head=head->next;
        tail->next=head;
        free(temp);

    }
    void deleteatEnd(){
        if(head==NULL){
            return;
        }
        Node*tail=head;
        while(tail->next->next!=head){
           tail=tail->next;
        }
        //tail is pointing to second last node

        Node*temp=tail->next;
        tail->next=head;
        free(temp);

    }
    
};
int main(){
    circularLL C1;
    C1.insertAtStart(1);
    C1.insertAtStart(2);//cp
    C1.insertAtStart(3);
    C1.insertAtStart(4);
    C1.insertAtStart(5);
    C1.insertAtTail(0);
    C1.insertAtTail(7);
    C1.display();
    C1.deleteatStart();
    C1.deleteatEnd();
    C1.display();
    return 0;
}