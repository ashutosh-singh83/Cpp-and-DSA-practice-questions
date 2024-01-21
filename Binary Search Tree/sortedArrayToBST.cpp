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
Node *sortedArrToBST(vector<int> &v, int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    int mid = (start + end) / 2;
    Node *root = new Node(v[mid]);
    // recursive case
    root->left = sortedArrToBST(v, start, mid - 1); // recursively creating left subtree from left half of array
    root->right = sortedArrToBST(v, mid + 1, end);  // recursively creating right subtree from right half of array
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    BST bst;
    bst.root = sortedArrToBST(v, 0, n - 1);
    preorderTraversal(bst.root);
    return 0;
}