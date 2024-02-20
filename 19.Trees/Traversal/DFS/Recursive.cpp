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
    if (!root)
        return;
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void inOrderTraversal(node *root)
{
    if (!root)
        return;
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}
void PostOrderTraversal(node *root)
{
    if (!root)
        return;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout << root->data << " ";
}

// BFS ->
vector<vector<int>> levelOrderTraversal(node *root , vector<vector<int>>&ans) // intuition behind this is that you have to process the elements in the same order as they are i.e FIFO so we can use a queue here
{ // T.C -> O(n) and space : O(n)
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        vector<int> level;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            node *curr = q.front();
            q.pop();
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
            level.push_back(curr->data);
        }
        ans.push_back(level);
    }
    return ans;
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
    cout << endl << "LevelOrder Traversal : ";
    vector<vector<int>>ans;
    levelOrderTraversal(root,ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
    }

    return 0;
}