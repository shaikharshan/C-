#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={9,8,7,6};
    int n = sizeof arr / sizeof arr[0];
    int minind;
    //linear search ans is index of min no. in array
    for(int i=0;i<n-2;i++)
    {
        if(arr[i]<arr[i+1]){
            minind=i;
        }
        else{
            minind=n-1;
        }
    }
    cout<<minind;
    return 0;
   
}
