#include<algorithm>
#include<iostream>
using namespace std;
void bubble(int arr[],int n)
{
    if(n==0)
    {
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
        swap(arr[i],arr[i+1]);

        }
    }
    bubble(arr,n-1);
}
int main()
{
    int arr[]={19,15,13,12,11};

    bubble(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}