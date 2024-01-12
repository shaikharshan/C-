#include <iostream>
using namespace std;
//if and else executed simultaneously

int main()
{
    int a = 1;
    if (a==1)
    {
        cout<<"if executed"<<endl;
        goto arsh;
    }
    else{
        arsh:
            cout<<"else executed";
    }
	return 0;
}


