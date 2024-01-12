#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,13,65,14200,20,1,54};
    int n=7,mx;
    //forever increasing series
    mx=arr[0];
    for(int i=0;i<n;i++)
    {
       if( mx<arr[i+1])
       {
            mx = arr[i+1];
            cout<<mx<<" ";
       }
    }
    return 0;
}