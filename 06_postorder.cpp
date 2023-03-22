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
    Node* root = new Node;
    root->data = data;
    root->left = root->right = NULL;
    return root;
}
void Postorder(struct Node* root){
if(root==NULL) return;
Postorder(root->left);
cout<<root->data<<" ";
Postorder(root->right);
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
    Postorder(root);
    return 0;
}