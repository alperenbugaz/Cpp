#include <iostream>
#include "Library.h" 

#define pi 3.14
#define circle(r) (2*pi*r)

#define DEBUG

int main()
{
    int r = 10;
    std::cout << circle(r);
    std::cout << pi;

    #ifdef DEBUG

    std::cout << "Development Message"; //DEBUG tanımlıysa bu "#ifndef" ve #endif arasını derle değilse derleme
    #endif

    #ifndef DEBUG
    std::cout << "Development Message" //DEBUG tanımlı DEĞİLSE bu "#ifndef" ve #endif arasını derle değilse derleme
#endif

#if 5<10

        printf("5<10");
    #endif


    std::cout << sum(10, 10); 

    Math mat(10,10);
    
    mat.division();


}
