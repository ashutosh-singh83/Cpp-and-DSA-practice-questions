#include <iostream>
using namespace std;
#include <vector>
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int v)
    {
        val = v;
        left = NULL;
        right = NULL;
    }
};
class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    }
};
Node *insert(Node *&root, int val)
{
    // base case
    if (root == NULL)
    {
        Node *newNode = new Node(val);
        return newNode;
    }
    // recursive
    if (root->val > val)
    {
        // insert in left subtree
        root->left = insert(root->left, val);
    }
    if (root->val < val)
    {
        // insert in right subtree
        root->right = insert(root->right, val);
    }
    return root;
}
Node *lowestCommonAncestor(Node *root, Node *node1, Node *node2)
{
    if (root->val > node1->val && root->val > node2->val)
    {
        // LCA will lie in left subtree
        return lowestCommonAncestor(root->left, node1, node2);
    }
    if (root->val < node1->val && root->val < node2->val)
    {
        // LCA will lie in right subtree
        return lowestCommonAncestor(root->right, node1, node2);
    }
    // if root value lies between node1 and node2
    // or if root value is equal to any of the node values
    return root;
}
int main()
{
    BST b1;

    b1.root = insert(b1.root, 3);
    insert(b1.root, 4);
    insert(b1.root, 2);
    insert(b1.root, 1);
    insert(b1.root, 5);
    cout << endl;
    Node *node1 = new Node(1);
    Node *node2 = new Node(4);
    Node *temp = lowestCommonAncestor(b1.root, node1, node2);
    cout << temp->val << endl;
    return 0;
}