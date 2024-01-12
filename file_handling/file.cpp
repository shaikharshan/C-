#include<iostream>
#include<queue>
#include<fstream>
using namespace std;

int main()
{
    ofstream obj("read.txt");
    string inp;
    while(obj)
    {
        getline(cin,inp);
        if(inp=="-1");
        {
            break;
        }
        obj<<inp;
    }
    obj<<inp;
    obj.close();







    return 0;
}