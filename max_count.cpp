#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int ans;
    int arr[]={1,2,4,2,3,2,1,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int cnt1=-1,cnt2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                cnt2++;
            }
        }
        if(cnt2>cnt1)
        {
            cnt1=cnt2;
            ans=i;
        }
        cnt2=0;
    }
    cout<<ans<<cnt1;
    return 0;
}