#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// DFS ->
void preOrderTraversal(node *root)
{
    if (!root) return;
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void inOrderTraversal(node *root)
{
    if (!root) return;
    inOrderTraversal(root->left);
    cout << root->data  << " ";
    inOrderTraversal(root->right);
}
void PostOrderTraversal(node *root)
{
    if (!root) return;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout << root->data << " ";
}

// BFS ->
void levelOrderTraversal(node*root){
    
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right = new node(3);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout << "PreOrder Traversal  : ";
    preOrderTraversal(root);
    cout << endl << "InOrder Traversal   : ";
    inOrderTraversal(root);
    cout << endl << "PostOrder Traversal : ";
    PostOrderTraversal(root);
    return 0;
}