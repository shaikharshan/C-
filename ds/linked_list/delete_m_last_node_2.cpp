#include<algorithm>
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

};
void insertHead(node* &head,int d)
{
    node* temp = new node(d);
    temp->next=head;
    head=temp;
}
void print(node* head)
{
    node* it = head;
    while(it != NULL)
    {
        cout<<it->data<<" ";
        it=it->next;
    }
}
void delete_m_to_last(node* head,int pos)
{
    node* it=head;
    for(int i=1;i<pos;i++)
    {
        it=it->next;
    }
    node* it2=head;
    while(it!=NULL)
    {
        it=it->next;
        it2=it2->next;
    }
    
}
int main()
{
    node* n1=new node(10);
    node* head =n1;
    insertHead(head,12);
    insertHead(head,13);
    insertHead(head,14);
    insertHead(head,15);
    print(head);
    cout<<endl;
    delete_m_to_last(head,3);
    print(head);
    return 0;

}