// 5-Fonksiyonlar.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>



int deneme (int k ) {

    k += 5;

	return k;
}

int topla (int a, int b) { //int fonksiyonlar geri dönüş değeri int olan fonksiyonlardır.
	return a + b;
}

double topla (double a, double b) { //aynı isimde farklı parametrelerle birden fazla fonksiyon tanımlanabilir.
	return a + b;
}


void message (char msg) {
	std::cout << msg <<"\n";
}


void merhaba() { //void fonksiyonlar geri dönüş değeri olmayan fonksiyonlardır.

    std::cout << "merhaba! \n";


}


int carpma (int a, int b); // ileriye dönük bildirim (forward declaration)


void print (std::string text = "Null") { //varsayılan değerli parametre
	std::cout << text << '\n';
}



int karealma(int x, int (*fint)(int, int)) {
    return fint(x, x); // x  karesini almak için carpma fonksiyonunu kullanır
}


inline int cikarma (int a , int b) { //inline fonksiyonlar, fonksiyonun içeriğini derleme anında çağrı yapan yere ekler. Az maliyetlidir.
	return a - b;
}

int main()
{
    merhaba();

    message ('A');

    printf("%d\n", topla(5, 10)); //15
    printf("%f\n", topla(5.5, 10.5)); //16.000000 

    int m = 10;
    int l = deneme(m);
    std::cout << l << '\n'; //15
    std::cout << m << '\n'; //10  

    
    std::cout << carpma(5, 10) << '\n'; //50

//-----------------------------------------------
   
	print("Example Text");

    int x = 5;
    int callback = karealma(x, carpma); // carpma fonksiyonunu kullanarak kare alma
    std::cout << callback << '\n'; //25


    std::cout << cikarma(10, 5) << '\n'; //5



    return 0;

    
}
int carpma(int a, int b) {
    return a * b;
}

