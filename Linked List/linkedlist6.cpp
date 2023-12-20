//to find intersection of two linked list
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
int getlength(Node*&head){
    Node*temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}
Node*moveHeadbyk(Node*&head,int k){
    Node*ptr=head;
    while(k--){
        ptr=ptr->next;
    }
    return ptr;

}
Node*getintersection(Node*&head1,Node*&head2){
    int l1=getlength(head1);
    int l2=getlength(head2);
    Node*ptr1=head1;
    Node*ptr2=head2;
    //both pointer must have same distance from null
    if(l1>l2){
        int k=l1-l2;
        ptr1=moveHeadbyk(head1,k);
        ptr2=head2;
    }else{
        int k=l2-l1;
        ptr1=head1;
        ptr2=moveHeadbyk(head2,k);

    }
    //if ptr1 and ptr2 becomes same then we will get our intersection
    while(ptr1){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;


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
    Linkedlist ll2;
    ll2.insertAtTail(1);
    ll2.insertAtTail(2);
    ll2.head->next->next=ll1.head->next->next->next;
    ll2.display();
    Node*intersection=getintersection(ll1.head,ll2.head);
    cout<<intersection->val<<endl;
    
    return 0;
}