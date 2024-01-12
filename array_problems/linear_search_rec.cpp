#include<iostream>
using namespace std;
bool linear(int arr[],int n,int k)
{
    if(n==0)
    {
        return 0;
    }
    if(k==arr[0])
    {
        return 1;
    }
   
        bool rem = linear(arr+1,n-1,k);
        return rem;
    
}
int main()
{
    int key=33;
    int arr[]={1,2,3,4,5};
    bool ans =linear(arr,5,key);
    cout<<ans;
    return 0;
}