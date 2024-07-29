#include <iostream>

int main()
{

	//assignment types
	int num1 = 5;
	int num2 = 10;
	int result = num1 + num2; //15
	//or
	int num3, num4, result2;
	num3 = 3;
	num4 = 4;
	result2 = num3 + num4; //7
	std::cout << result;
	// num1 and Num1 are different variables (C++ is case-sensitive)
		
	//incorrect variable names
	/*
		int 1number;     // Cannot start with a digit
		int my variable; // Cannot contain spaces
		int my-variable; // Cannot contain special characters
		int double;      // Cannot use keywords
		int my.variable; // Cannot contain dots

		*/
	return 0;
}
