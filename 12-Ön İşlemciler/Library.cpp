//Fonksiyonlar�n i�levleri bu dosyada yap�l�r.
#include "Library.h"

Math::Math(int a, int b) :a(a), b(b) {} //nesnenin i�ersindeki a'ya parametre olarak a ya ata //class i�in atama i�lemi

int Math::division()  {

	return this->a / this->b;
}


int sum(int a, int b) {

	return a + b;
} 