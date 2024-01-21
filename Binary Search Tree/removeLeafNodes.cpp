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
Node *removeLeafNodes(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (!root->left && !root->right)
    {
        return NULL;
    }
    root->left = removeLeafNodes(root->left);
    root->right = removeLeafNodes(root->right);
    return root;
}
void preorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
int main()
{
    BST b1;

    b1.root = insert(b1.root, 3);
    insert(b1.root, 4);
    insert(b1.root, 2);
    insert(b1.root, 1);
    insert(b1.root, 5);
    preorderTraversal(b1.root);
    cout << endl;
    b1.root = removeLeafNodes(b1.root);
    preorderTraversal(b1.root);
    return 0;
}