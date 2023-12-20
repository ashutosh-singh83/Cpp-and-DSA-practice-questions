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
int main(){
    Node n(3);
    cout<<n.val<<" "<<n.next<<endl;

    //another way to declare object
    Node*n1=new Node(5);
    cout<<n1->val<<" "<<n1->next<<endl;

}