//merge two sorted linked list
//merge k sorted linked list
#include<iostream>
#include<vector>
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
Node*mergeSortedLL(Node*&head1,Node*&head2){
    Node*dummyhead=new Node(-1);
    Node*ptr1=head1;
    Node*ptr2=head2;
    Node*ptr3=dummyhead;
    while(ptr1 && ptr2){
        if(ptr1->val<ptr2->val){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;

    }
    if(ptr1){//ptr1 not becomes null
        ptr3->next=ptr1;
    }else{
        ptr3->next=ptr2;
    }
    return dummyhead->next;


}
Node*mergeKLL(vector<Node*> &lists){
    if(lists.empty()){
        return NULL;
    }
    while(lists.size()>1){
        Node*mergedhead=mergeSortedLL(lists[0],lists[1]);
        lists.push_back(mergedhead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return lists[0];

}
int main(){
    Linkedlist ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(30);
    ll1.display();
    Linkedlist ll2;
    ll2.insertAtTail(1);
    ll2.insertAtTail(5);
    ll2.insertAtTail(6);
    ll2.display();
    Linkedlist ll3;
    ll3.insertAtTail(1);
    ll3.insertAtTail(8);
    ll3.insertAtTail(90);
    ll3.display();
    vector<Node*> lists;
    lists.push_back(ll1.head);
    lists.push_back(ll2.head);
    lists.push_back(ll3.head);

    Linkedlist mergedLL;
    mergedLL.head=mergeKLL(lists);
    mergedLL.display();


    
    
    return 0;
}