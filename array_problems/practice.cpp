// insertion sort
#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{   
    for(int i=1;i<n;i++)
    {
        int key = a[i];
        int j = i-1;
        while(j>=0 && key<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;

    }

  
   
}
int main()
{
    int n,arr[]={11,23,132,432,2,12};
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    insertion_sort(arr,n);
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}