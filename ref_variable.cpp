#include<iostream>
using namespace std;
int& func(int a)
{
    int n=a;
    int& num = n;
    return num;

}
//show error as all variables here 

int main()
{
    func(5);
    char* ch=new char;
    cout<<sizeof(ch);
    return 0;
} 