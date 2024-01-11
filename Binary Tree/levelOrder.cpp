//level order traversal of tree
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
void levelOrder(Node*root){
    //base case
    if(root==NULL){
        return;
    }
    
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int nodesAtcurrentLevel=q.size();
        while(nodesAtcurrentLevel--){
            Node* currNode=q.front();
            q.pop();
            cout<<currNode->val<<" ";
            if(currNode->left){
                q.push(currNode->left);
            }
            if(currNode->right){
                q.push(currNode->right);
            }
        }
        cout<<endl;
    }

}
int main(){
    Node*root=new Node(2);
    root->left=new Node(4);
    root->right=new Node(10);
    root->left->left=new Node(5);
    root->left->right=new Node(6);
    
    root->right->right=new Node(11);
    levelOrder(root);
    
    return 0;
}
//    2
//   4  10
//  5 6    11
