//creating a doubly Linked list
//operation on dLL
//reversing the DLL
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
    void inserAtStart(int val){
        Node*new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;

        }
        
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return;
    }
    void deleteatStart(){
        if(head==NULL) return;
        Node*temp=head;
        head=head->next;
        if(head==NULL){
            tail=head;
        }else{
            head->prev=NULL;
        }
        free(temp);
        return;
    }
    void deleteatend(){
        if(head==NULL) return;
        Node*temp=tail;
        tail=tail->prev;
        if(tail==NULL){
            head=NULL;
        }else{
            tail->next=NULL;
        }
        free(temp);
        return;
    }
    void deleteatpos(int k){
        if(k==1){
            return deleteatStart();
        }
        int count=1;
        Node*temp=head;
        while(count<k){
            temp=temp->next;
            count++;
        }
        //temp is pointing to kth node
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
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
    void insertatPos(int val,int k){
        //assuming k is less than the length of the LL
        Node*new_node=new Node(val);
        Node*temp=head;
        int count=1;
        while(count<(k-1)){
            temp=temp->next;
            count++;
        }
        new_node->next=temp->next;
        temp->next=new_node;
        new_node->prev=temp;
        new_node->next->prev=new_node;
    }
    void display(){
        Node*temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }
};
void reverseDll(Node*&head,Node*&tail){
    Node*curr=head;
    while(curr){
        Node*nextptr=curr->next;
        curr->next=curr->prev;
        curr->prev=nextptr;
        curr=nextptr;
    }
    Node*new_head=tail;
    tail=head;
    head=new_head;
    return;
}
int main(){
    doublyLL d1;
    d1.insertAttail(1);
    d1.insertAttail(2);
    d1.insertAttail(3);
    d1.insertAttail(4);
    d1.display();
    reverseDll(d1.head,d1.tail);
    d1.display();
    
    return 0;
}