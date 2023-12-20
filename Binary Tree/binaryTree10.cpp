//reverse level order traversal of tree
#include<iostream>
#include<queue>
#include<vector>
#include<stack>
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
vector<int> reverseLevelOrder(Node*root){
    vector<int> ans;
    //base case
    if(root==NULL){
        return ans;
    }
    
    queue<Node*>q;
    stack<Node*>s;
    q.push(root);
    while(!q.empty()){
        int nodesAtcurrentLevel=q.size();
        while(nodesAtcurrentLevel--){
            Node* currNode=q.front();
            q.pop();
            s.push(currNode);
            if(currNode->right){
                q.push(currNode->right);
            }
            if(currNode->left){
                q.push(currNode->left);
            }
        }
    }
    while(!s.empty()){
        ans.push_back(s.top()->val);
        s.pop();
    }
    return ans;

}
int main(){
    Node*root=new Node(2);
    root->left=new Node(4);
    root->right=new Node(10);
    root->left->left=new Node(5);
    root->left->right=new Node(6);
    
    root->right->right=new Node(11);
    vector<int> ans=reverseLevelOrder(root);
    for(auto ele:ans){
        cout<<ele<<" ";
    }
    return 0;
}
//    2
//   4  10
//  5 6    11
