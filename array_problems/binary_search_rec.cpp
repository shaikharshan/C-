#include<iostream>
using namespace std;
bool binary_rec(int arr[],int s,int e,int k)
{
    if(s>e)
    {
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k)
    {
        return true;
    }
    else if(arr[mid]>k)
    {
        binary_rec(arr,s,mid-1,k);
    }
    else
    {
        binary_rec(arr,mid+1,e,k);
    }
}
int main()
{
    int arr[]={10,12,13,14,15,16};
    int n=6;
    int key=11;
    bool ans =binary_rec(arr,0,n-1,key);
    cout<<ans;
    return 0;
}