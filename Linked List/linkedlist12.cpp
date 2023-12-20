//rotating LL by k steps
//T.C=2n-k
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
Node*rotatebyKLL(Node*&head,int k){
    //1.find length of LL
    int n=0;
    //2.find tail node
    Node*tail=head;
    while(tail->next){
        n++;//for finding length
        tail=tail->next;//for finding last node
    }
    n++;//for including last node
    
    k%=n;
    if(k==0){
        return head;
    }
    tail->next=head;
    //3.traverse n-k nodes
    
    Node*temp=head;
    for(int i=1;i<n-k;i++){
        temp=temp->next;
    }
    //temp is now pointing to (n-k)th node
    Node*new_head=temp->next;
    temp->next=NULL;
    return new_head;
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
    ll1.head=rotatebyKLL(ll1.head,6);
    ll1.display();

    
    return 0;
}