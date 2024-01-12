#include<iostream>
#include<algorithm>
using namespace std;
char *reverse(char ch[])
{
    int n=sizeof(ch)/sizeof(ch[0]);
    int s=0,e=n-1;
    while(s<e)
    {
        swap(ch[s],ch[e]);
        s++;
        e--;

    }
    return ch;

}
int main()
{
    char temp[30];
    char ch[30]={'h','i',' ','t','h','e','r','e',' ','s','o','n'};
    int j=0;
    for(int i=0;i!='\0';i++)
    {
        if(ch[i]!=' ')
        {
            temp[j]=ch[i];

        }
        else 
        {
            reverse(temp);
            
    
        }
        j++;
        i++;
    }
    return 0;

}