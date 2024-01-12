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
node* exchange_circular(node* head)
{
    node* prev=NULL;
    node* it=head->next;
    while(it->next!=head)
    {
        prev=it;
        it=it->next;
    }
    prev->next=head->next;
    //incompletes
    head=it;
    it->next=prev;

}