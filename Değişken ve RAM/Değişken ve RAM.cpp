// Değişken ve RAM.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

int main()
{
    int a = 10;
    int b = 20;

    std :: cout << "a: " << a << " b: " << b << '\n'; //a: 10 b: 20
    std :: cout << "a adresi: " << &a << " b adresi: " << &b << '\n';  //a adresi: 0000001D1A4FFB04  b adresi: 0000001D1A4FFB24

    int* aptr = &a;
    std::cout << "ptr: " << aptr << '\n'; //ptr: 0000001D1A4FFB04
    
    int c =  *aptr;
    std::cout << "c: " << c << '\n'; //c: 10
    


    int j = 20;
    int* jptr = &j;

    std::cout  << jptr << '\n'; // 0000001D1A4FFB00
    std::cout << *jptr << '\n';  //20
    std::cout << &*jptr << '\n'; //0000001D1A4FFB00
    std::cout << *&*jptr << '\n'; //20
    std::cout << &*&*jptr << '\n'; //0000001D1A4FFB00

   


}

