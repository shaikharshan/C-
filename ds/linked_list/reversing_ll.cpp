#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    
    node(int d)
    {
    this->data = d;
    this->next=NULL; 
    }
};
void insert_head(node* &head,int d)
{
    node* temp = new node(d);
    temp->next=head;
    head=temp;
}
void print(node* &head)
{
    node* it = head;
    while(it!=NULL)
    {
        cout<<it->data<<" ";
        it=it->next;
    }
    cout<<endl;
}
void reverse_ll(node* &head)
{
    node* prev=NULL;
    node* curr = head;
    node* fwd = NULL;
    while(curr!=NULL)
    {
        fwd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fwd;
    }
    head=prev;

}

int main()
{
    node* n1=new node(10);
    node* head=n1;
    insert_head(head,12);
    insert_head(head,13);
    insert_head(head,14);
    insert_head(head,15);
    insert_head(head,16);
    print(head);
    reverse_ll(head);
    print(head);
    return 0;
}








