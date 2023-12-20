//inorder traversal of tree
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
void inorder(Node*root){
    //base case
    if(root==NULL){
        return;
    }
    
    //recursive call
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int main(){
    Node*root=new Node(2);
    root->left=new Node(4);
    root->right=new Node(10);
    root->left->left=new Node(6);
    root->left->right=new Node(5);
    
    root->right->right=new Node(11);
    inorder(root);
    
    return 0;
}
//    2
//   4  10
//  5 6    11
