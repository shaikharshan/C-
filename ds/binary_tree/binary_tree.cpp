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
        cout<<"enter the data "<<endl;
        int d;
        cin>>d;
        root=new node(d);
        if(d==-1)
        {
            return NULL;
        }
        cout<<"enter value to the left of "<<d<<endl;
        root->left=buildTree(root->left);
        cout<<"enter value to the right of "<<d<<endl;
        root->right=buildTree(root->right);
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
void inorder(node* root)
{
    //LNR
    node* temp=root;

    if(temp==NULL)
    {
        return;
    }
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}
void preorder(node* root)
{
    //NLR
    node* temp=root;

    if(temp==NULL)
    {
        return;
    }
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}
void postorder(node* root)
{
    //LRN
    node* temp=root;

    if(temp==NULL)
    {
        return;
    }
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<" ";
}
int maxHeight(node* root)
{
        node* temp = root;
        if(temp==NULL)
        {
            return 0;
        }

        int lheight=maxHeight(temp->left);
        int rheight=maxHeight(temp->right);
        if(lheight>rheight)
        {
            return lheight+1;
        }
        else
        {
            return rheight+1;
        }


 }
 node* buildFromLevelOrder(node* root)
 {
    queue<node*> q;
    cout<<"enter data "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty())
    {
        node* temp =q.front();
        q.pop();
        cout<<"enter left of "<<temp->data<<endl;
        int l;
        cin>>l;
         if(l!=-1)
         {
            temp->left=new node(l);   
         q.push(temp->left);
         }
         cout<<"enter right of "<<temp->data<<endl;
        int r;
        cin>>r;
         if(r!=-1)
         {
            temp->right=new node(r);   
         q.push(temp->right);
         }

    }
 }
int main()
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
{
    node* root = NULL;
    root=buildTree(root);
    printTree(root);
    int ans = maxHeight(root);
    cout<<endl<<ans<<endl;
    // cout<<"inorder"<<endl;
    // inorder(root);
    //  cout<<"preorder"<<endl;
    // preorder(root);
    //  cout<<"postorder"<<endl;
    // postorder(root);
    return 0;
}