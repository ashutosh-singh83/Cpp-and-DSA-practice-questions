//delete alternate nodes in a linked list
//delete duplicate nodes
//reverse print the linked list
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
void deleteAlternateNodes(Node*&head){
    Node*curr_node=head;
    while(curr_node!=NULL && curr_node->next!=NULL){
        Node*temp=curr_node->next;//node to be deleted
        curr_node->next=curr_node->next->next;
        free(temp);
        curr_node=curr_node->next;
    }

}
void deleteDuplicateNodes(Node*&head){
    Node*curr_node=head;
    while(curr_node){
        while(curr_node->next!=NULL && curr_node->val==curr_node->next->val){
            //delete curr->next
            Node*temp=curr_node->next;
            curr_node->next=curr_node->next->next;
            free(temp);
        }
        //this loop ends when curr_node and curr_node->next value are different or linked list ends
        curr_node=curr_node->next;
    }
}
void reversePrint(Node*&head){
    //base condition
    if(head==NULL) return;
    //recursive case
    reversePrint(head->next);
    cout<<head->val<<" ";
}
int main(){
    Linkedlist l1;
    l1.insertAtTail(1);
    
    l1.insertAtTail(1);
    
    l1.insertAtTail(1);
    
    l1.insertAtTail(1);
    
    l1.display();
    
    deleteDuplicateNodes(l1.head);
    l1.display();
    


}