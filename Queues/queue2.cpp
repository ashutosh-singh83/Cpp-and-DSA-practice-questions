//LL implementation of queue
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class queue{
    public:
    Node* front;
    Node* back;
    queue(){
        front=NULL;
        back=NULL;
    }
    void push(int x){
        Node*n=new Node(x);
        if(front==NULL){
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;
    }
    void pop(){
        if(front==NULL){
            cout<<"No elements in queue"<<endl;
            return;
        }
        Node*toDelete=front;
        front=front->next;
        delete(toDelete);
    }
    int peek(){
        if(front==NULL){
            cout<<"No elements in queue"<<endl;
            return -1;
        }
        return front->data;
    }
    bool isEmpty(){
        if(front==NULL){
            cout<<"No elements in queue"<<endl;
            return true;
        }
        return false;
    }


};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.isEmpty()<<endl;
    
}