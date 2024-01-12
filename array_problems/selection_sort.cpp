#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{   
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={14,10,11,13,15,12};
    int n = 6;
    selection_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}