#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* prev;
    
    node(int d)
    {
    this->data = d;
    this->next=NULL;
    this->prev=NULL; 
    }
};
void insertHead(node* &head,int d)
{
    node* n = new node(d);
    head->prev=n;
    n->next=head;
    //cout<<head->prev->data;
    head=n;
}
void print(node* &head)
{
    node* it=head;
    while(it!=NULL)
    {
        cout<<it->data<<" ";
        it=it->next;
    }
}
int main()
{
    node* n1=new node(10);
    node * head=n1;
    insertHead(head,12);
    insertHead(head,13);
    insertHead(head,14);
    insertHead(head,15);
    //print(head);

    return 0;
}