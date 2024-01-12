#include<iostream>
using namespace std;
//bubble sort
int main()
{
    int i,k;
    int arr[6]={6,5,4,3,2,1},a;

    for(i=0;i<6;i++){
        for(k=0;k<6;k++)
        {
            if(arr[k]>arr[k+1]){
                a=arr[k+1];
                arr[k+1]=arr[k];
                arr[k]=a;
            }
        }
    }
    for(int j=0;j<6;j++){
        cout<<arr[j];
    }
  
    

    return 0;
}