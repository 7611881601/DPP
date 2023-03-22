#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node
{
    int data;
    struct Node *left, *right;
};
Node* makenode(int data)
{
    Node* n = new Node;
    n->data = data;
    n->left = n->right = NULL;
    return n;
}
void Preorder(struct Node* n)
if(root==Null) return;
cout<<root->data<<" ";
Preorder(root->left);
Preorder(root->right);
}
int main()
{
    struct Node* root = makenode(1);
    root->left = makenode(2);
    root->right = makenode(3);
    root->left->left = makenode(4);
    root->left->right = makenode(5);
    root->right->left = makenode(6);
    root->right->right = makenode(7);
    Preorder(root);
    return 0;
}