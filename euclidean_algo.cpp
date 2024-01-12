#include<iostream>
using namespace std;
//gcd of two no.s
//then lcm
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    else{
   
        gcd(b%a,a);
    }
}
int main()
{
    int a=12,b=30;
   
    int ans = gcd(a,b);
    int lcm = (a*b)/ans;
    cout<<"gcd is "<<ans<<endl;
    cout<<"lcm is "<<lcm;
    return 0;
}