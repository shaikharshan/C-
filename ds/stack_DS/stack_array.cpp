#include<iostream>
using namespace std;
class stack
{
    //initialize
    int top;
    int* arr;
    int size;

    public:
    //methods
    stack(int s)
    {
        this->size=s;
        top=-1;
        arr=new int[size];
    }
    void push(int d)
    {
        if(size-top > 1)
        {
            top++;
            arr[top]=d;
        }
        else
        {
            cout<<"StackOverflow"<<endl;
        }
    }
    void pop()
    {
        if(top>=0)
        {
            top--;
            cout<<"dn";

        }
        else{
            cout<<"StackUnderflow"<<endl;
        }
    }
    //see top element
    void peek()
    {
        if(top>=0)
        {
             cout<< arr[top]<<endl;
        }
        else
        {
            cout<<"stack is empty"<<endl;
        }
    }
    bool empty()
    {
        if(top==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    stack s(6);
    s.push(12);
    s.push(13);
    s.peek();
    s.pop();
    s.pop();
    cout<<s.empty();

    return 0;
}