//basic 
#include<iostream>
#include<queue>
using namespace std;
class Node
{
    
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
 void inorder(Node* root, vector<int>& arr)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        vector<int> arr;
        inorder(root,arr);
        // for(int i=0;i<arr.size();i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        int N = arr.size();
        return arr[N-K];
    }
//optimized

  void d(Node* root,int K,int &c,int &ans)
    {   

         if(root==NULL)
        return ;
       
       d(root->right,K,c,ans);
       c++;
       if(c==K)
       {
           ans=root->data;
           return;
       }
       d(root->left,K,c,ans);
        
    }
    
    int kthLargest(Node *root, int K)
    {
        //Your code here
      int c=0;
      int ans=0;
      d(root,K,c,ans);
      return ans;
    }