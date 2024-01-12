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
node* insertBST(node* &root,int d)
{
    if(root==NULL)
    {
        root = new node(d);
        return root;
    }
    if(d<root->data)
    {
        insertBST(root->left,d);

    }
    else
    {
        insertBST(root->right,d);
    }
    return root;
}
void printTree(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);  // separator

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        if(temp==NULL)//level completed
        {  
            cout<<endl;
            if(!q.empty())
            {
                //further child nodes available
                q.push(NULL);
            }

        }
        else{
            cout<<temp->data<<" ";
             if(temp->left)
        {

           q.push(temp->left);

        }
         if(temp->right)
        {

           q.push(temp->right);

        }
        }
        

       
    }


}
node* minVal(node* root)
{
    node* temp = root;
    while(temp->left!=NULL)
    {
        temp=temp->left;

    }
    return temp;
}
node* maxVal(node* root)
{
    node* temp = root;
    while(temp->right!=NULL)
    {
        temp=temp->right;

    }
    return temp;
}
node* deleteFromBST(node* root,int x)
{

    if(root==NULL)
    {
        return root;
    }
    if(root->data==x)
    {
        //0 child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        //1 child
        if(root->left && root->right==NULL)
        {
            node* temp = root->left;
            delete root;
            return temp;
        }if(root->right && root->left==NULL)
        {
            node* temp = root->right;
            delete root;
            return temp;
        }
        //2 children
        if(root->left && root->right)
        {
            int min = minVal(root->right)->data;
            root->data=min;
            root->right = deleteFromBST(root->right,min);
            return root;
        }
    }
    
}
int main()
{   
    node* root = NULL;
    int d;
    cin>>d;
    while(d!=-1)
    {
        insertBST(root,d);
        cin>>d;
    }
    printTree(root);


    return 0;
}