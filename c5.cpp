

// C++ Program to demonstrate function definition
#include <iostream>
using namespace std;

int fun(int x)
{
	// definition of
	// function
	x = x + 5;
    cout << "x = " << x <<endl;
    return x;
}

int main()
{
	int x = 20;
	fun(x);
	cout << "x = " << x;
	return 0;
}
