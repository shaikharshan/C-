#include<algorithm>
#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    //form two arrays dynamic
    int *a1=new int[len1]; 
    int *a2=new int[len2];
    int k=s;
    //copy values from arr to formed arrays
    for(int i=0;i<len1;i++)
    {
        a1[i]=arr[k];
        k++;
    } 
    k=mid+1;

    for(int i=0;i<len2;i++)
    {
        a2[i]=arr[k];
        k++;
    }
    //merge two sorted arrays
    int i=0,j=0;
    k=s;
    while(i<len1 && j<len2)
    {

    if(a1[i]<a2[j])
    {
        arr[k]=a1[i];
        k++;i++;
    }
    else{
        arr[k]=a2[j];
        k++;j++;
    }
    }
    while(i<len1)
    {
         arr[k]=a1[i];
        k++;i++;
    }
    while(j<len2)
    {
        arr[k]=a2[j];
        k++;j++;

    }
    delete []a1;
    delete []a2;



}
void mergeSort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int mid =(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}
int main()
{
    int arr[]={19,15,13,12,11};

    mergeSort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
