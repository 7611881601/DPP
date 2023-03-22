#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node{
    int data;
    struct Node *left, *right;
};
Node* makenode(int data)
{
    Node* root = new Node;
    root->data = data;
    root->left = root->right = NULL;
    return root;
}
void LevelOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* root = q.front();
        cout<<root->data<<" ";
        q.pop();

        if(root->left!=NULL)
        {
            q.push(root->left);
        }
        if(root->right!=NULL)
        {
            q.push(root->right);
        }
    }
}
int main()
{
    Node* root = makenode(10);
    root->left = makenode(20);
    root->right = makenode(30);
    root->left->left = makenode(40);
    root->left->right = makenode(50);
    root->right->left = makenode(60);
    root->right->right = makenode(70);
    LevelOrder(root);
    return 0;
}