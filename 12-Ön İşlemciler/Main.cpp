#include <iostream>
#include "Library.h"  // bu dizin derlenirken Library.h dosyasýndaki fonksiyon tanýmlamalarý yorumlanýr

int sum(int a, int b); //derleyici bütün kaynak dosyalarýný derler bu hatýrtlatýcý fonkisyon sayesinde, library.cpp dosyasýndaki sum çalýþmýþ oldu.


int main() {

	std::cout << sum(5, 5);

}