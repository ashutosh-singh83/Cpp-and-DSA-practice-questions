//finding maximum depth of tree
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
int maxDepth(Node*root){
    //base case
    if(root==NULL){
        return 0;
    }
    int leftDepth=maxDepth(root->left);
    int rightDepth=maxDepth(root->right);
    return max(leftDepth,rightDepth)+1;
}
int main(){
    Node*root=new Node(2);
    root->left=new Node(4);
    root->right=new Node(10);
    root->left->left=new Node(5);
    root->left->right=new Node(6);
    root->right->right=new Node(11);
    root->right->right->right=new Node(12);
    cout<<maxDepth(root)<<endl;
    
    return 0;
}
//    2
//   4  10
//  5 6    11
//            12