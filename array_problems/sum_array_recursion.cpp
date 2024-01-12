#include<iostream>
using namespace std;
int sum_rec(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }
   
        int rem = sum_rec(arr+1,n-1);
        int sum=arr[0]+rem;
        return sum;
    
}
int main()
{
    int arr[]={1,2,3,4,5};
    int sum=sum_rec(arr,5);
    cout<<sum;
    return 0;
}