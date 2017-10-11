#include <iostream>
using std::cout;

//DON'T EDIT THIS FUNCTION
int main(int argc, char* argv[])
{
	if(add(1000, 2000) == 3000 && add(-1050, 50) == -1000)
	{
		cout << "Good job! Move on to the next exercise.\n";
	}
	else
	{
		cout << "add() is not working as expected.\n";
	}
	return 0;
}

