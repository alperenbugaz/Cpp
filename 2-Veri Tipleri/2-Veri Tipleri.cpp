#include <iostream>

int main()
{

	//String data types are used 8-bit (1 byte)
	//B = 01000010


	//An address in RAM consists of 8 bits (1 byte)
	//The int type allocates 4 addresses (32 bits) in RAM.
	int num1 = 10; // 00000000 00000000 00000000 00001010
	//    589      590	   591     592      --- Addresses in RAM


//char type allocates 1 address (8 bits) in RAM. Typical Range: -128 to 127
// TYPE                        TYPICAL BIT WIDTH             TYPICAL RANGE 
// char                        8 bits                        -128 to 127
// unsigned char               8 bits                        0 to 255
// signed char                 8 bits                        -128 to 127
// int                         16 bits                       -32,768 to 32,767
// unsigned int                16 bits                       0 to 65,535
// signed int                  16 bits                       -32,768 to 32,767
// short int                   16 bits                       -32,768 to 32,767
// unsigned short int          16 bits                       0 to 65,535
// signed short int            16 bits                       -32,768 to 32,767
// long int                    32 bits                       -2,147,483,648 to 2,147,483,647
// signed long int             32 bits                       -2,147,483,648 to 2,147,483,647
// unsigned long int           32 bits                       0 to 4,294,967,295
// long long int               64 bits                       -(2^63) to (2^63)-1
// unsigned long long int      64 bits                       0 to 18,446,744,073,709,551,615
// float                       32 bits                       3.4E +/- 38 (7 digits)
// double                      64 bits                       1.7E +/- 308 (15 digits)
// long double                 80 bits                       1.1E +/- 4932 (19 digits)
// wchar_t                     16 bits                       0 to 65,535

/*The size of data types in C++ can vary from system to
 system and compiler to compiler. Generally, it is as mentioned above.*/


	char a = 'a';  //a
	char b[] = "alperen";

	std::cout << a << '\n';
	unsigned int c = 10; // 
	unsigned int d = 20; // 
	signed int e; //
	e = c - d; // -10
	std::cout << c - d << '\n'; //a4294967286 
	std::cout << e << '\n'; // -10

	float f{ 123456789.0 };
	std::cout << f << '\n'; //1.23457e+08  = 1.23 x 10^8 = 123,000,000
	double g{ 123456789.0f };
	std::cout << g << '\n'; //123456789

	bool h = true;
	bool i = false;
	std::cout << h << '\n'; //1
	std::cout << i << '\n'; //0



	int number2{ 10 }; // = int number2 = 10;

	//const sabit de�i�keni tan�mlar
	const double pi = 3.14;
	const char firstLetter = 'A';




	//kapal� t�r d�n���m�
	int number1;
	number1 = 10.5;
	std::cout << number1 << '\n'; //10 


	//a��k t�r d�n���m�
	float number3 = 20.5;
	double number4 = static_cast<int>(number3);
	std::cout << number4 << '\n'; //20
	char char1 = { 97 };
	std::cout << char1 << '\n'; //a
	std::cout << static_cast<int>(char1) << '\n'; //97







	return 0;

}