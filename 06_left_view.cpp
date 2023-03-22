#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
void LeftView(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *root = q.front();
            q.pop();

            if (i == 0)
            {
                cout << root->data << " ";
            }
            if (root->left != NULL)
            {
                q.push(root->left);
            }
            if (root->right != NULL)
            {
                q.push(root->right);
            }
        }
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    LeftView(root);
    return 0;
}