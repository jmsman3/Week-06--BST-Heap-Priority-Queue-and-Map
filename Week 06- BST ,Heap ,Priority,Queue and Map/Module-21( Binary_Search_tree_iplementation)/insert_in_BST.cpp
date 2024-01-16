#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
//__________________________________________________________(tree)
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        return NULL ;else root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
//__________________________________________________________(Level)
void Level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "tree nai" << endl;
    }

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
void insert_in_Bst(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }

    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert_in_Bst(root->left, x);
        }
    }
    else 
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert_in_Bst(root->right, x);
        }
    }
}
int main()
{     
    Node * root = input_tree();
    int t; cin>>t;
    insert_in_Bst( root , t);
    Level_order( root);

    return 0;
}