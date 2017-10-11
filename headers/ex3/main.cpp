#include "A.h"
#include "B.h"
#include <string>

//DO NOT MODIFY THIS FILE!

int main(int argc, char* argv[])
{
	if(argc > 1 && argv[1] == "beta")
	{
		beta();
		alpha();
	}
	else //defaults to alpha
	{
		alpha();
	}
}