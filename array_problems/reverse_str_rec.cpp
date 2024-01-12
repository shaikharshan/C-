#include<algorithm>
#include<iostream>
using namespace std;
void reverse_rec(string &s,int i,int j)
{
    if(i>j)
    {
        return;
    }
    swap(s[i],s[j]);
    reverse_rec(s,i+1,j-1);
    
 
}
int main()
{
    string s= "arshan";
    int n=s.length();
    reverse_rec(s,0,n-1);
    cout<<s;
    return 0;
}