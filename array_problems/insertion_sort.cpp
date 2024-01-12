#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{   int j,temp,current;
   for(int i =1;i<n;i++)
   {
        current=arr[i];
        j=i-1;
        while(j>=0 && current<arr[j])
        // compare key to every left element 
        {
           arr[j+1]=arr[j];
           j--;
        }
        // previous line has j-- so,j+1
        arr[j+1]=current;
   }
}
int main()
{
    int arr[]={14,10,11,13,15,12};
    int n = 6;
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}