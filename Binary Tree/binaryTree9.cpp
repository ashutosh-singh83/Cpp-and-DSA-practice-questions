//nodes visible in top view of binary tree
#include<iostream>
#include<queue>
#include<map>
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
vector<int> topViewTree(Node*root){
    //base case
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    map<int,int> m;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        int nodesAtcurrentLevel=q.size();
        while(nodesAtcurrentLevel--){
            pair<Node*,int> p=q.front();
            Node*currNode=p.first;
            int currCol=p.second;
            q.pop();
            if(m.find(currCol)==m.end()){
                m[currCol]=currNode->val;
            }
            if(currNode->left){
                q.push(make_pair(currNode->left,currCol-1));
            }
            if(currNode->right){
                q.push((make_pair(currNode->right,currCol+1)));
            }
            
        }
        
    }
    for(auto it:m){
        ans.push_back(it.second);
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
    vector<int> ans=topViewTree(root);
    for(int v:ans){
        cout<<v<<" ";
    }
    return 0;
}
//    2
//   4  10
//  5 6    11
//      12