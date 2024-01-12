#include<iostream>
using namespace std;

int main()
{
    int a,b,mul=1;
    //exponential a,b without pow()
    cout<<"type a,b ";
    cin>>a;
    cin>>b;
    while(b>0)
    {
        b=b/2;
        if(b%2==0)
        {
            mul = mul * b;
        }
        else{
            mul = mul*b*a;
        }
    }
    cout<<mul;

    return 0;
}