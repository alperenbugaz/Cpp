//Fonksiyonların işlevleri bu dosyada yapılır.
#include "Library.h"

Math::Math(int a, int b) :a(a), b(b) {} //nesnenin içersindeki a'ya parametre olarak a ya ata //class için atama işlemi

int Math::division()  {

	return this->a / this->b;
}


int sum(int a, int b) {

	return a + b;
} 