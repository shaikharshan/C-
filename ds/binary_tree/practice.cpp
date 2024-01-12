#include<iostream>
#include<queue>
using namespace std;
class node
{
    
    public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }


};


node* buildTree(node* root)
{
    int d;
    cout<<"enter the root value "<<endl;
    cin>>d;
    root = new node(d);
    if(d==-1)
    {
        return NULL;
    }
    cout<<"enter the left value "<<endl;
    root->left = buildTree(root->left);
    cout<<"enter the RIGHT value "<<endl;
     root->right = buildTree(root->right);
    return root;
}