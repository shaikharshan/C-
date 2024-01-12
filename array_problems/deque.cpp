#include <iostream>
using namespace std;
#include<deque>
#include<stack>
int main()
{
    stack <int> b;
    deque <int> a;
    for(int i=0;i<5;i++)
    {
        a.push_back(i);
    }
    deque<int>::iterator it = a.begin();
    for(int i=0;i<5;i++)
    {
        b.push(i);
    }
    while(!b.empty())
    {
    cout<<b.top();
    b.pop();

    }


}