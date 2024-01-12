#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
//order of negative does not matter

int main()
{
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n= 9;
    int i = 0, j = n-1;
        for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    while(i<j)
    {
        if(arr[i]>=0 && arr[j]<0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]<0 && arr[j]>=0)
        {
            i++;
            j--;

        }
        else if(arr[i]<0 && arr[j]<0)
        {
            i++;
        }
        else if(arr[i]>=0 && arr[j]>=0)
        {
            j--;
        }
    }
        for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}