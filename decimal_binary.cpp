#include<iostream>
using namespace std;

int main(){
    int i=0,n,nc;
    int rem[200];
    cout<<"type number ";
    cin>>n;
    nc=n;
    while(nc>0){
        rem[i]=nc%2;
        nc=nc/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<rem[j]<<" ";
    }
    

    return 0;
}