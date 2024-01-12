#include<iostream>
using namespace std;
int main(){
    
    int arr[6]={1,2,3,4,5,6};
    int d,i,j;
    cin>>d;
    int a,narr[6];
   //storing first d elements  
    for(i=0;i<d;i++){
        narr[i]=arr[i];
        }
    //shifting array to eliminate stored d elements
    for(i=0;i<6-d+1;i++){
        arr[i]=arr[i+d];

    }
    //combining shifted array with stored d elements at last (thus d elements rotated ) 
    for(i=0;i<d;i++)
    {
        arr[6-d+i]=narr[i];
    }
   //printing shifted stored array
    for(i=0;i<6;i++){
        cout<<arr[i];
    }
    return 0;
}