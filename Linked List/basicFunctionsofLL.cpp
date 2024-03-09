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
void insertAtHead(Node*&head,int val){
    Node*new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}
void insertAtTail(Node*&head,int val){//T.C:-O(n)  T.C-O(1) when tail pointer is given

    Node*new_node=new Node(val);
    Node*temp=head;//we take temp variable when we have to traverse the LL 
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //when temp reaches at the last node
    temp->next=new_node;
}
void insertAtPos(Node*&head,int val,int pos){
    if(pos==0){
        insertAtHead(head,val);
        return;
    }
    Node*new_node=new Node(val);
    int curr_pos=0;
    Node*temp=head;
    while(curr_pos!=pos-1){
        temp=temp->next;
        curr_pos++;
    }
    //temp is pointing to node at pos-1
    new_node->next=temp->next;
    temp->next=new_node;
}
void updateAtPos(Node*&head,int val,int pos){
    Node*temp=head;
    int curr_pos=0;
    while(curr_pos!=pos){
        temp=temp->next;
        curr_pos++;
    }
    //temp is pointing to pos
    temp->val=val;

}
void deleteAtHead(Node*&head){
    Node*temp=head;
    head=head->next;
    free(temp);
}
void deleteAtTail(Node*&head){
    Node*second_last=head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }
    //now second_last points to the second last node
    Node*last=second_last->next;//node to be deleted
    second_last->next=NULL;
    free(last);
}
void deleteAtPos(Node*& head,int pos){
    if(pos==0){
        deleteAtHead(head);
        return;
    }
    Node*prev=head;
    int curr_pos=0;
    while(curr_pos!=pos-1){
        prev=prev->next;
        curr_pos++;
    }
    //prev has reached the node at pos-1
    Node*temp=prev->next;
    prev->next=prev->next->next;
    free(temp);
}
void display(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}
int main(){
    Node*head=NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,3);
    display(head);
    insertAtPos(head,4,2);
    display(head);
    updateAtPos(head,5,1);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    insertAtTail(head,3);
    display(head);

    deleteAtPos(head,1);
    display(head);


}