#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;

    }
    ~node()
    {
        if(this->next!=NULL)
        {
        delete next;
        this->next=NULL;

        }
    }
};
void insertHead(node* &head,int d)
{
    node* n = new node(d);
    n->next=head;
    head=n;  

}
void insertTail(node* &tail,int d)
{
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;

}
void insertPosition(int pos,int d,node* &head,node* &tail)
{
    node *it=head;
    node* temp=new node(d);
    if(pos==1)
    {
        insertHead(head,d);
        return;
    }
    for(int i=1;i<pos-1;i++)
    {
        it=it->next;
    }
    if(it->next==NULL)//i.e insertion at last position can be directly done by insertTail
    {
        insertTail(tail,d);
        return;
    }
    temp->next=it->next;

    it->next=temp;


}
void deleteNode(node* head,int pos)
{
    if(pos==1)
    {
        node* temp=head;
        head=head->next;
        delete temp;
    }
     node *it=head;
     node* prev=NULL;
     
      for(int i=1;i<=pos-1;i++)
    {
       prev=it;
        it=it->next;
    
    }
     prev->next=it->next;
     delete it;

}
//insert values in ll

void print(node* &head)
{
     node *temp=head;
     while(temp!=NULL)
     {
        cout<<temp->data<<" ";
        temp=temp->next;
     }

}
int main()
{
    node* n1 = new node(10);
    
    node* head=n1;
    node* tail=n1;
    insertHead(head,12);
    insertHead(head,13);
    insertHead(head,15);
    insertPosition(5,17,head,tail);
    // deleteNode(head,3);

    print(head);
    return 0;

}