//implementation of binary search tree
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
class BST{
    public:
    Node*root;
    BST(){
        root=NULL;
    }
};
/*iterative approach
void insert(Node*&root,int val){
    Node*newNode=new Node(val);
    if(root==NULL){
        root=newNode;
        return;
    }
    Node*current=root;
    while(true){
        if(current->val>val){
            //go to left subtree
            if(current->left==NULL){
                current->left=newNode;
                return;
            }
            current=current->left;
        }else{
            if(current->right==NULL){
                current->right=newNode;
                return;
            }
            current=current->right;

        }
    }
}
*/
//recursive approach
Node*insert(Node*&root,int val){
    //base case
    if(root==NULL){
        Node*newNode=new Node(val);
        return newNode;
    }
    //recursive
    if(root->val>val){
        //insert in left subtree
        root->left=insert(root->left,val);

    }
    if(root->val<val){
        //insert in right subtree
        root->right=insert(root->right,val);
    }
    return root;
}
void inorderTraversal(Node*root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->val<<" ";
    inorderTraversal(root->right);
}
bool searchNode(Node*root,int key){
    //base case
    bool ans;
    if(root==NULL){
        return false;
    }
    if(root->val==key){
        return true;
    }
    if(root->val>key){
        searchNode(root->left,key);
    }
    if(root->val<key){
        searchNode(root->right,key);
    }
    

}
Node*largestBST(Node*root){
    Node*curr=root;
    while(curr&&curr->right!=NULL){
        curr=curr->right;
    }
    return curr;
}
Node*deleteBST(Node*&root,int key){
    if(root==NULL){
        return root;
    }
    if(root->val>key){
        deleteBST(root->left,key);
    }
    else if(root->val<key){
        deleteBST(root->right,key);
    }
    else{
        //node has 0 child
        if(root->left==NULL&&root->right==NULL){
            free(root);
            return NULL;
        }
        // node has 1 child
        else if(root->left==NULL){
            Node*temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            Node*temp=root->left;
            free(root);
            return temp;
        }
        //node has 2 child
        else{
            Node*justSmallerNode=largestBST(root->left);
            root->val=justSmallerNode->val;
            root->left=deleteBST(root->left,justSmallerNode->val);

        }
    }
    return root;
}
int main(){
    BST b1;
    
    b1.root=insert(b1.root,3);
    insert(b1.root,4);
    insert(b1.root,2);
    insert(b1.root,1);
    insert(b1.root,5);
    inorderTraversal(b1.root);
    cout<<endl;
    cout<<searchNode(b1.root,7)<<endl;
    b1.root=deleteBST(b1.root,2);
    inorderTraversal(b1.root);
    cout<<endl;
    return 0;
    

}