//nodes visible in right view of binary tree
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
vector<int> rightViewTree(Node*root){
    //base case
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int nodesAtcurrentLevel=q.size();
        while(nodesAtcurrentLevel){
            Node* currNode=q.front();
            q.pop();
            if(nodesAtcurrentLevel==1){
                ans.push_back(currNode->val);
            }
            if(currNode->left){
                q.push(currNode->left);
            }
            if(currNode->right){
                q.push(currNode->right);
            }
            nodesAtcurrentLevel--;
        }
        
    }

}
int main(){
    Node*root=new Node(2);
    root->left=new Node(4);
    root->right=new Node(10);
    root->left->left=new Node(5);
    root->left->right=new Node(6);
    root->left->right->right=new Node(12);
    root->right->right=new Node(11);
    vector<int> ans=rightViewTree(root);
    for(int v:ans){
        cout<<v<<" ";
    }
    return 0;
}
//    2
//   4  10
//  5 6    11
//      12