#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    vector<Node *> children;
    Node(int val)
    {
        this->data = val;
    }
};
void justGreaterNode(Node *root, int x, Node *&ansNode)
{
    if (root == NULL)
        return;

    if (root->data > x && (ansNode == NULL || root->data < ansNode->data))
    {
        ansNode = root;
    }
    for (Node *child : root->children)
    {
        justGreaterNode(child, x, ansNode);
    }
    return;
}
int main()
{
    Node *root = new Node(20);
    root->children.push_back(new Node(12));
    root->children.push_back(new Node(22));
    root->children.push_back(new Node(10));
    root->children[0]->children.push_back(new Node(34));
    root->children[0]->children.push_back(new Node(21));
    root->children[2]->children.push_back(new Node(9));
    int x = 20;
    Node *ansNode = NULL;
    justGreaterNode(root, x, ansNode);
    if (ansNode == NULL)
        cout << "NULL" << endl;
    else
    {
        cout << ansNode->data << endl;
    }

    return 0;
}