#include <iostream>
using namespace std;
int binary_search(int arr[],int k,int n)
{
    int s=0,e=n-1,mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
            
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
       

    }    
    return -1;
}
int main()
{
    int arr[]={10,11,12,13,14,15};
    int n =6,k; 
    cout<<"type key "<<endl;
    cin>>k;
    cout<<binary_search(arr,k,n);
    return 0;
}
//to loop the=rough an array shirtcut is for(int i:arr_name){}