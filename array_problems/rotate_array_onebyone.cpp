#include<iostream>
using namespace std;
void rotater(int a[],int n){

    int x=a[n-1];
    for(int i=n;i>0;i--){
        a[i-1]=a[i-2];

    }
    a[0]=x;


}
int main()
{   int n=6;
    int arr[n]={1,2,3,4,5,6};
    rotater(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}