#include <iostream>
#include "Library.h"  // bu dizin derlenirken Library.h dosyas�ndaki fonksiyon tan�mlamalar� yorumlan�r

int sum(int a, int b); //derleyici b�t�n kaynak dosyalar�n� derler bu hat�rtlat�c� fonkisyon sayesinde, library.cpp dosyas�ndaki sum �al��m�� oldu.


int main() {

	std::cout << sum(5, 5);

}