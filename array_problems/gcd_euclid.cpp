#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    else if(b==0)
    {
        return a;
    }
    while(a!=0 || b!=0)
    {
        if(a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main()
{
    int a=24,b=12;
    int ans=gcd(a,b);
    cout<<ans;
    return 0;

}