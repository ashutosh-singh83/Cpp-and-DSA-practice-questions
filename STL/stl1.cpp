//creating template classes
#include<iostream>
using namespace std;
template<typename T>
class Node{
    public:
    T val;
    Node*next;
    Node*prev;
    Node(T data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};
int main(){
    Node<int>* new_node=new Node<int>(5);
    cout<<new_node->val<<endl;
    Node<char>* new_node1=new Node<char>('a');
    cout<<new_node1->val<<endl;

}