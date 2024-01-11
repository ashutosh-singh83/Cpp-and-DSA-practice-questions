#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int v){
        val=v;
        left=NULL;
        right=NULL;
    }
};
int main(){
    Node*root=new Node(2);
    root->left=new Node(3);
    root->right=new Node(4);
    cout<<"Root is:"<<root->val<<endl;
    cout<<"Root left child is:"<<root->left->val<<endl;
    cout<<"Root right child is:"<<root->right->val<<endl;
    return 0;
}