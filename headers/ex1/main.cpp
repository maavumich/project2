#include <iostream>
#include "maths.h"
using std::cout;


/*
 * DO NOT EDIT THIS MAIN FUNCTION
 */

int main(int argc, char* argv[])
{
	int res = add(10, 7);
	int res2 = add(-5, 15);
	int res3 = add(0, 0);
	if (res == 17 && res2 == 10 && res3 == 0)
	{
		cout << "Good job! Move onto the next exercise.\n";
	}
	else
	{
		cout << "add() is not working as expected.\n";
	}
	
	return 0;
}