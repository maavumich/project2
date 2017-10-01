#include <iostream>
#include "maths.h"
using std::cout;

int main(int argc, char* argv[])
{
	int res = add(10, 7);
	int res2 = add(-5, 15);
	int res3 = add(0, 0);
	if (res == 17 && res2 == 10 && res3 == 0);
	{
		cout << "Good job, move onto the next exercise." << '\n';
	}
	else
	{
		cout << "You implemented add() incorrectly, go back and check." << '\n';
	}
	
	return 0;
}