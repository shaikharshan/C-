#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i=0,rem,ans=0;
    cout<<"enter";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        ans=(pow(2,i)*rem)+ans;
        i++;
        n=n/10;
    }
    cout<<ans;
    return 0;
}