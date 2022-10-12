#include <iostream>
#include<queue>
#include<stack>
using namespace std;
int ele;
char val;
class Node
{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

Node* InsertNode(Node* root,int data)
{
    if(root==NULL)
    {
        Node * temp = new Node(data);
        root = temp;
        return root;
    }
    else
    {
        cout<<"Enter l for Left or r for Right :";
        cin>>val;
        if(val=='l')
        {
            root->left = InsertNode(root->left,data);
        }
        else
        {
            root->right = InsertNode(root->right,data);
        }
    }
    return root;
}

void InOrder(Node* root)
{
    if(!root)
    {
        return;
    }
    InOrder(root->left);
    cout << root->data << " | ";
    InOrder(root->right);
}

void PreOrder(Node* root)
{
    if(!root)
    {
        return;
    }
    cout << root->data << " | ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(Node* root)
{
    if(!root)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " | ";
}

void levelOrder(Node* root)
{
    queue<Node*> q;
    if(root)
        q.push(root);
    while(!q.empty())
    {
        auto temp = q.front();
        cout << temp->data << " | ";
        q.pop();
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}

void ZigzagOrder(Node* root)
{
    queue<Node*> q;
    if(root)
        q.push(root);
    while(!q.empty())
    {
        stack<Node *> v;
        while(!q.empty())
        {
            auto temp = q.front();
            cout << temp->data << " | ";
            q.pop();
            if(temp->left)
                v.push(temp->left);
            if(temp->right)
                v.push(temp->right);
        }
        
        while(!v.empty())
        {
            q.push(v.top());
            v.pop();
        }
    }
}

int main()
{
    cout << "Tree Implementation ";
    Node* root = NULL;
    while(1)
    {
        cout << "\n1.InsertNode \n2.Inorder\n3.PreOrder\n4.PostOrder\n5.levelOrder\n6.ZigzagOrder\n7.Exit";
        int c=0;
        cout << "\nEnter option : ";
        cin >> c;
        switch(c)
        {
            case 1: cout << "Enter Value : ";
                    cin >> ele;
                    root = InsertNode(root,ele);
                    break;
            case 2 : InOrder(root);
                    break;
            case 3: PreOrder(root);
                    break;
            case 4: PostOrder(root);
                    break;
            case 5 : levelOrder(root);
                    break;
            case 6 : ZigzagOrder(root);
                    break;
            case 7 : exit(0);
                    break;
        }
    }
}


