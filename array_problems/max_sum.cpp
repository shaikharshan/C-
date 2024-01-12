#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int arr[n]={6,5,4,3};
    int i,j,t, sum;
    //bubble sort to ascending order
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1]){
                t=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(i=0;i<n;i++){
        sum = sum + i*arr[i];
    }
    cout<<"maximum sum of i*arr[i] is "<<sum;
    return 0;
}