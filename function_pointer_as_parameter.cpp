#include<iostream>
using namespace std;
void func1()
{
    cout<<"func1 is called";
}
void func2(void (*func_pointer)())
{
    func_pointer();
}
int main()
{
    func2(func1);
    return 0;
}