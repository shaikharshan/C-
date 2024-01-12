#include<iostream>
using namespace std;
int main(){
    //find if there is a sum of pairs equal to input in array
    int arr[8]={1,2,3,4,78,16,54,63};
    int i,x;
    cout<<"enter the sum of pair ";
    cin>>x;
    for(i=0;i<8;i++)
    {
        for(int j=i+1;j<8-i;j++)
        {
            int a=arr[i]+arr[j];
            if(a=x)
            {
                cout<<"TRUE";
                return 0;
            }
            else{
                cout<<"FALSE";
            }
        }
    }
   
}