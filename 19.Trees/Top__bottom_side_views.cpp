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
vector<int> printLeftView(node *root)
{
    vector<int> sol;
    if (!root)
        return sol;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;
        while (size--)
        {
            auto curr = q.front();
            q.pop();
            level.push_back(curr->data);
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
        sol.push_back(level[0]);
    }
    return sol;
}
vector<int> getTopView(node *root)
{

    vector<int> ans;
    if (!root)
        return ans;   // mp<level,node->data>
    map<int, int> mp; // level order traversal and then storing first node of each vertical order
    queue<pair<node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        int size = q.size();
        while (size--)
        {
            auto currNode = q.front().first;
            int vertical = q.front().second;
            q.pop();
            if (mp.find(vertical) == mp.end())
                mp[vertical] = currNode->data;
            if (currNode->left)
                q.push({currNode->left, vertical - 1});
            if (currNode->right)
                q.push({currNode->right, vertical + 1});
        }
    }
    for (auto x : mp)
    {
        ans.push_back(x.second);
    }
    return ans;
}
vector<int> bottomView(node *root)
{
    vector<int> ans;
    if (!root)
        return ans;   // mp<level,node->data>
    map<int, int> mp; // level order traversal and then storing first node of each vertical order
    queue<pair<node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        int size = q.size();
        while (size--)
        {
            auto currNode = q.front().first;
            int vertical = q.front().second;
            q.pop();
            /*if(mp.find(vertical)==mp.end())*/ mp[vertical] = currNode->data; // same as top just update the node in the vertical level as you change the levels and encounter any node in same vertical
            if (currNode->left)
                q.push({currNode->left, vertical - 1});
            if (currNode->right)
                q.push({currNode->right, vertical + 1});
        }
    }
    for (auto x : mp)
    {
        ans.push_back(x.second);
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
    return 0;
}