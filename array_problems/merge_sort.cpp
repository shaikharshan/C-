// divide and conquer
#include<iostream>
using namespace std;
void merge(int a[],int p,int q,int r)
{
    int n1=q-p+1,n2=r-q;
    int l1[200],l2[200];
    for(int i =0;i<n1;i++)
    {
        l1[i]=a[p+i];
    }
    for(int j=0;j<n2;j++)
    {
        l2[j]=a[q+j];
    }
    int i=0,j=0,k=p;
    while(l1[i]<n1 && l2[j]<n2)
    {
        if(l1[i]<l2[j])
        {
            a[k]=l1[i];
             i++;
        }
        else
        {
            a[k]=l2[j];
            j++;
        }
        k++;
    }
    while(l1[i]<n1)
    {
        a[k]=l1[i];
        i++;
        k++;
    }
    while(l2[j]<n2)
    {
        a[k]=l2[j];
        j++;
        k++;
    }




}
void merge_sort(int a[],int s,int e)
{
        if(s<e)
        {
            int mid = (s+e)/2;
            merge_sort(a,s,mid);
            merge_sort(a,mid+1,e);
            merge(a,s,mid,e);
        }
}
void print(int arr[],int n)
{
    for(int a=0;a<n;a++)
    {
        cout<<arr[a]<<" ";
    }

}
int main()
{
    int n,arr[]={15,14,131,21,11};
    n=sizeof(arr)/sizeof(arr[0]);
    
    merge_sort(arr,0,n-1);
    print(arr,n);
    return 0;
}