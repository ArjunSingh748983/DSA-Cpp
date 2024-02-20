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
        this->left = nullptr;
        this->right = nullptr;
    }
};
void preOrder(node *root)
{
    if (!root)
        return;
    stack<node *> st;
    st.push(root);
    while (!st.empty())
    {
        node *curr = st.top();
        st.pop();
        cout << curr->data << " ";
        if (curr->right)
            st.push(curr->right);
        if (curr->left)
            st.push(curr->left);
    }
}

void postOrder(node *root)
{

    if (!root)
        return;
    stack<node *> st1;
    stack<node *> st2;
    st1.push(root);
    while (!st1.empty())
    {
        st2.push(st1.top());
        st1.pop();
        if (st2.top()->left)
            st1.push(st2.top()->left);
        if (st2.top()->right)
            st1.push(st2.top()->right);
    }
    while (!st2.empty())
    {
        cout << st2.top()->data << " ";
        st2.pop();
    }
}

void inOrder(node *root)
{
    stack<node *> st;
    node *node = root;
    while (true)
    {
        if (node)
        {
            st.push(node);
            node = node->left;
        }
        else
        {
            if (st.empty())
                break;
            node = st.top();
            st.pop();
            cout << node->data << " ";
            node = node->right;
        }
    }
}

void postOrder_single_stack(node *root)
{
    stack<node *> st;
    node *curr = root;
    while (curr or !st.empty()) // O(2n) and space : O(n)
    {
        if (curr)
        {
            st.push(curr);
            curr = curr->left;
        }
        else
        {
            node *temp = st.top()->right;
            if (!temp)
            {
                temp = st.top();
                st.pop();
                while (!st.empty() and temp == st.top()->right)
                {
                    temp = st.top();
                    st.pop();
                    cout << temp->data << " ";
                }
            }
            else
            {
                curr = temp;
            }
        }
    }
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
    postOrder(root);
    return 0;
}