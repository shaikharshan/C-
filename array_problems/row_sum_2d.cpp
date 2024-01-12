#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={0,1111,2,3,498988,5,6,7,8};
    int sum=0;
    int flag=-1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[i][j];

        }
        cout<<"sum of row "<<i+1<<" is "<<sum<<endl;
        if(sum>flag)
        {
            flag=sum;
        }
        sum=0;
    }
    cout<<"largest sum is "<<flag<<endl;
}