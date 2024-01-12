#include<iostream>
#include<string>
using namespace std;
void rev_str(string &str,int n)
{
    string temp;
    for(int i=0;i<n/2;i++)
    {   
        temp[i] = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp[i];
    }


}
int main()
{
    string str;
    cout<<"type ";
    cin>>str;
    int n = str.length();
    rev_str(str,n);
    cout<<str;
    return 0;
}