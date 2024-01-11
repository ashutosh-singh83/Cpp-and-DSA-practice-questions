//finding no. of leaves in a tree
#include<iostream>
#include<queue>
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
int leafNodes(Node*root){
    //base case
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL&&root->right==NULL){
        return 1;
    }
    int leftSubtreeLeafNodes=leafNodes(root->left);
    int rightSubtreeLeafNodes=leafNodes(root->right);
    return leftSubtreeLeafNodes+rightSubtreeLeafNodes;
}
int main(){
    Node*root=new Node(2);
    root->left=new Node(4);
    root->right=new Node(10);
    root->left->left=new Node(5);
    root->left->right=new Node(6);
    root->right->right=new Node(11);
    root->right->right->right=new Node(12);
    root->right->right->left=new Node(12);
    cout<<leafNodes(root)<<endl;
    
    return 0;
}
//    2
//   4  10
//  5 6    11
//       12     12