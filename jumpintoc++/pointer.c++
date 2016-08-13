#include <iostream>
using namespace std;
int main()
{
	int  x = 5;
	int *point = &x;

	cout<< "x's address " << point << " x's address "  << &x << endl;
}