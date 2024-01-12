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
void insertTail(node* &tail,int d)
{
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;


}
void print(node* &tail)
{
    node* temp=tail;
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
int main()
{
    node* n1=new node(10);
    node* tail = n1->next;
    insertTail(tail,12);
    insertTail(tail,12);
    print(tail);
    return 0;



}