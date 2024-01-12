#include<iostream>
using namespace std;
int binarySearch(long long int n)
{
   if(n==0)
   {
       return 0;
   }
   else if(n==1)
   {
       return 1;
   }
   long long int s=0,e=n;
    long long int ans=-1;
    long long int mid=s+((e-s)/2);
    while(s<=e)
    {
        if(mid==n/mid)
        {
            return mid;
        }
        else if(mid<n/mid)
        {
            ans=mid;
            s=mid+1;
        }
        else if(mid>n/mid)
        {
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}
int main()
{
    int n=5;
    float ans=binarySearch(n);
    while(ans<n/ans)
    {
        ans=ans+0.01;

    }
    cout<<ans;


}
