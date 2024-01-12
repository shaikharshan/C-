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
class stack
{
    node* top;

    public:
    stack()
    {
       top=NULL;
    }
    void push(int data)
    {
        node* temp=new node(data);
        temp->next=top;
        top=temp;
        
    }
    void pop()
    {
        if(top==NULL)
        {
            cout<<"stack underflow"<<endl;
        }
        else
        {
            node* it=top;
            top=top->next;
            delete it;
        }
    }
    bool isEmpty()
    {
        return top==NULL;
    }
    int peek()
    {
        if(top==NULL)
        {

            return -1;
        }
        else
        {
            return top->data;
        }
    }
};
int main()
{
    return 0;
}