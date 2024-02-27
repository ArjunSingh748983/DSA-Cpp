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
int width_of_binary_tree(node *root, int &dm)
{
    if (!root)
        return 0;
    int lh = width_of_binary_tree(root->left, dm);
    int rh = width_of_binary_tree(root->right, dm);
    dm = max(dm, lh + rh);
    return 1 + max(lh, rh); // to select the path with maximum height
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
    int dm = INT_MIN;
    cout << width_of_binary_tree(root, dm);
    return 0;
    return 0;
}