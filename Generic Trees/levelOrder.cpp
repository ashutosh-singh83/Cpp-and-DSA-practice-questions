#include <iostream>
#include <vector>
#include <queue>
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

    return 0;
}