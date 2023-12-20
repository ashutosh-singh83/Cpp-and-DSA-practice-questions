//finding min and max distance between critical points
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
class doublyLL{
    public:
    Node*head;
    Node*tail;
    doublyLL(){
        head=NULL;
        tail=NULL;
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
    void display(){
        Node*temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }
};
bool isCriticalPoint(Node*&currNode){
    if(currNode->prev->val>currNode->val && currNode->next->val>currNode->val){
        return true;
    }
    if(currNode->prev->val<currNode->val && currNode->next->val<currNode->val){
        return true;
    }
    return false;
}
vector<int> distanceBetweenCriticalPoints(Node *head,Node* tail){
    vector<int> ans(2,INT16_MAX);
    int firstCP=-1,lastCP=-1;
    Node*currNode=tail->prev;
    if(currNode==NULL){
        ans[0]=ans[1]=-1;
        return ans;
    }
    int curr_pos=0;
    while(currNode->prev!=NULL){
        if(isCriticalPoint(currNode)){
            if(firstCP==-1){
                firstCP=lastCP=curr_pos;
            }
            else{
                ans[0]=min(ans[0],curr_pos-firstCP);//min distance
                ans[1]=lastCP-firstCP;//max distance
                lastCP=curr_pos;
            }
        }
        curr_pos++;
        currNode=currNode->prev;
    }
    if(ans[0]==INT16_MAX){
        ans[0]=ans[1]=-1;
    }
    return ans;
}
int main(){
    doublyLL d1;
    d1.insertAttail(1);
    d1.insertAttail(5);//cp
    d1.insertAttail(2);//cp
    
    d1.insertAttail(6);//cp
    d1.insertAttail(3);//cp
    d1.insertAttail(7);
    d1.display();
    vector<int> ans;
    ans=distanceBetweenCriticalPoints(d1.head,d1.tail);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}