#include<iostream>
#include<queue>
using namespace std;
#include<regex>



int main()
{   
    string mystr = "she sells_sea shells on the sea shore";
    regex mysch("se[a-z_]+");
    smatch m;
    regex_search(mystr,m,mysch);
    for(auto i:m)
    {
        cout<<i<<endl;
    }

    return 0;
}