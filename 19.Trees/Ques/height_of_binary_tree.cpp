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
int height_of_binary_tree(node *root)
{
    if (!root)
        return 0;
    int lh = height_of_binary_tree(root->left);
    int rh = height_of_binary_tree(root->right);
    return 1 + max(lh, rh);
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout << height_of_binary_tree(root);
    return 0;
}