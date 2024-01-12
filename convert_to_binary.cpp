#include<iostream>
#include<math.h>
using namespace std;
int dtb(int n)
{
    unsigned int ans=0,i=0;
    while(n!=0)
    {
        int dig=n&1;
        ans=( ceil(pow( 10, i)) * dig)+ ans;
        n=n>>1;
        i++;
        
    }
    return ans;
    
}
int main()
{
    int n;
    cout<<"enter digit "<<endl;
    cin>>n;
    cout<<dtb(n);
    return 0;
}