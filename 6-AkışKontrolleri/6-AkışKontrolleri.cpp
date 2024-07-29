#include <iostream>

int main()
{


    // Conditional Statements --if, else switch case
    //Jumps Goto --- Break, Continue
    //Loops --- For, While, Do While
    //Halts and Continue --- Return, Exit
    //Exception Handling --- Try, Catch, Throw
    int a = 10;
    int b = 20;


    // if statement
    if (a > b)
	{
		std::cout << "a is greater than b\n";
	}
	else if (a < b)
	{
		std::cout << "b is greater than a\n";
	}

    else {
        std::cout << "a is equal to b\n";
    }

    // switch case
    int c =20;
    char  d = 'a';

    switch (d) {

    case 10: std::cout << "c is 10\n"; break;

    case 20: std::cout << "c is 20\n"; break;

    case 30: std::cout << "c is 30\n"; break;

    default: std::cout << "c is not 10, 20 or 30\n"; break; }
    
    //for loop
    for (int i = 0; i < 10; i++)
	{
		std::cout << i << '\n';
	}


    //while loop
    int j = 0;
    while (true) {
        j++;
        std ::cout << j << '\n';
        if (j == 10) {
			std::cout << "j is 10 loop ended\n";
            break;
		}
	}


    //do while loop
    int k = 0;
    do {
		k++;
		std::cout << k << '\n';
	} while (k < 10);
    


    //continue
    for (int i = 10; i < 20; i++) {
        printf("i is %d\n", i);
        if (i == 12) {
            std::cout << "5\n";
            continue; 
            std::cout << "6\n"; //this line will not be executed
        }

    }


    for (int i = 10; i < 20; i++) {
		printf("i is %d\n", i);
		if (i == 12) {
			goto stop;
		}

	}

stop:
    std::cout << "Program ended\n";

    return 0; 
}
