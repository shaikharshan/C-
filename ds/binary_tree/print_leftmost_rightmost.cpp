/*Given a Binary Tree of size N, Print the corner nodes ie- the node at the leftmost and rightmost of each level.

Note: Don't print a new line after printing all the corner nodes.

Example 1:

Input :
         1
       /  \
     2      3
    / \    / \
   4   5  6   7    
Output: 1 2 3 4 7*/
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



void printCorner(Node *root)
{

// Your code goes here
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                Node* temp = q.front();
                q.pop();
                if(i==0 || i==size-1)
                {
                    cout<<temp->data<<" ";
                }
                
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