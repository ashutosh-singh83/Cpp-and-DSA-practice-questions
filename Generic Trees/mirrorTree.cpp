#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
class Node
{
public:
    char data;
    vector<Node *> children;
    Node(char data)
    {
        this->data = data;
    }
};
void levelorderTraversal(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> qu;
    qu.push(root);
    while (!qu.empty())
    {
        int nodesAtCurrLevel = qu.size();
        while (nodesAtCurrLevel--)
        {
            Node *currNode = qu.front();
            // dequeue
            qu.pop();
            cout << currNode->data << " ";
            // enqueue
            for (Node *child : currNode->children)
            {
                qu.push(child);
            }
        }
        cout << endl;
    }
}
void mirrorTree(Node *root)
{
    if (root == NULL)
        return;
    if (root->children.size() < 2)
    {
        return;
    }
    reverse(root->children.begin(), root->children.end());
    for (Node *child : root->children)
    {
        mirrorTree(child);
    }
    return;
}
int main()
{
    Node *root = new Node('A');
    root->children.push_back(new Node('B'));
    root->children.push_back(new Node('C'));
    root->children.push_back(new Node('D'));
    root->children[0]->children.push_back(new Node('E'));
    root->children[0]->children.push_back(new Node('F'));
    root->children[2]->children.push_back(new Node('G'));
    levelorderTraversal(root);
    mirrorTree(root);
    cout << "Mirror Tree" << endl;
    levelorderTraversal(root);
    return 0;
}