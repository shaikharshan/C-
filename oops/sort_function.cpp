#include<iostream>    
#include<algorithm>
using namespace std;
//For example in the code snippet below, we have tried to sort the elements of an array on the basis of the remainders they produce when divided by 10(using ‘%’ operator).
//our function
bool My_func( int a, int b)
{	
	return (a%10)<(b%10);
}

int main()
{  
    //array initialisation
    int demo[5] = {18, 45, 34, 92, 21};
    
    int len = sizeof(demo)/sizeof(demo[0]);
     
    cout<<"Before sorting array : ";
    for(int i=0; i<len; i++)
    {
        cout<<" "<<demo[i];
    }
     //sort() takes third argument as boolean value.
    std::sort(demo, demo + len, My_func);//Sorting demo array
     
    cout<<"\n\nAfter sorting array : ";
    for(int i=0; i<len; i++)
    {
        cout<<" "<<demo[i];
    }
    return 0;
}