#include<iostream>
using namespace std;
//block swap
int main(){
    int arr[20];
    int k=0,i,n=0;
    char c='y';
    while(c=='y')
    {   
        cout<<"enter the array value";
        cin>>arr[n];
        cout<<"do you want to continue?";
        cin>>c;
        n++;
    }
    while(k<n){
        cout<<arr[k]<<" ";
        k++;
    }
    
 


}