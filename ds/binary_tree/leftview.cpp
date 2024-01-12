#include<iostream>
#include<queue>
#include<map>
#include<vector>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data = data;
        this->left=NULL;
        this->right=NULL;
    }

};

void leftView(Node* root)
{
    map<int,int> m;
    //  hd , val
    //use find function

    queue<pair<Node*,int>> q;
    if(root!=NULL)
    {
        q.push(make_pair(root,0));
    }    
    while(!q.empty())
    {
        pair<Node*,int> temp = q.front();
        Node* top = temp.first;
        int lvl = temp.second;
        if(m.find(lvl) == m.end())
        {
            m[lvl]=top->data;
        }

        if(top->left)
        {
            q.push(make_pair(top->left,lvl-1));
        }
        
        if(top->right)
        {
            q.push(make_pair(top->left,lvl+1));
        }
        q.pop();
    }

}


int main()
{
    return 0;
}