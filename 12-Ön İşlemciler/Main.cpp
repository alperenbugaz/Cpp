#include <iostream>
#include "Library.h"  // bu dizin derlenirken Library.h dosyasındaki fonksiyon tanımlamaları yorumlanır

int sum(int a, int b); //derleyici bütün kaynak dosyalarını derler bu hatırtlatıcı fonkisyon sayesinde, library.cpp dosyasındaki sum çalışmış oldu.


int main() {

	std::cout << sum(5, 5);

}