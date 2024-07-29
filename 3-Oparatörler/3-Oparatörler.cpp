// Oparatörler.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";


    // +     toplama  a+b     a ile b'nin toplamı
    int a = 10;
    int b = 20;
    int c = a + b;
    std::cout << c << '\n'; //30
    // -     çıkarma  a-b     a ile b'nin farkı
    int d = a - b;
    std::cout << d << '\n'; //-10
    // *     çarpma   a*b     a ile b'nin çarpımı
    int e = a * b;
    std::cout << e << '\n'; //200

    // /     bölme    a/b     a'nın b'ye bölümü
    float f = b / a;
    std::cout << f << '\n'; //2
    // %     mod      a%b     a'nın b'ye bölümünden kalan
    int g = b % a;
    std::cout << g << '\n'; //0

    // 
    // ++    artırma  a++ ve ++a   a'nın değerini bir artırır
    int aplus = a++;
    std::cout << aplus << '\n'; //10
    int aplus2 = ++a;
    std::cout << aplus2 << '\n'; //12


    // --    azaltma  a--     a'nın değerini bir azaltır
    int aminus = a--;
    std::cout << aminus << '\n'; //12
    int aminus2 = --a;
    std::cout << aminus2 << '\n'; //10

    // =     atama    a=b     a'nın değerini b'ye atar
    int h = a;
    std::cout << h << '\n'; //10

    // +=    toplama  a+=b    a'nın değerine b'yi ekler
    int i = 10;
    i += 20;
    std::cout << i << '\n'; //30
    // -=    çıkarma  a-=b    a'nın değerinden b'yi çıkarır
    int j = 20;
    j -= 10;
    std::cout << j << '\n'; //10

    //
    // *=    çarpma   a*=b    a'nın değerini b ile çarpar
    int k = 10;
    k *= 20;
    std::cout << k << '\n'; //200
    // /=    bölme    a/=b    a'nın değerini b'ye böler
    int l = 20;
    l /= 10;
    std::cout << l << '\n'; //2


    // %=    mod      a%=b    a'nın değerini b'ye böler ve kalanı atar
    int m = 20;
    m %= 12;
    std::cout << m << '\n'; //8
    // ==    eşit     a==b    a ve b eşitse true döner
    int a1 = 10;
    int a2 = 10;
    bool n = a1 == a2;
    std::cout << n << '\n'; //1 (true)

    // !=    eşit değil a!=b    a ve b eşit değilse true döner
    int b1 = 10;
    int b2 = 20;
    bool o = a1 != a2;
    std::cout << o << '\n'; //0 (false)

    // >     büyük    a>b     a büyükse true döner

    bool p = b2 > b1;
    std::cout << p << '\n'; //1 (true)

    // <     küçük    a<b     a küçükse true döner
    // >=    büyük eşit a>=b    a büyük veya eşitse true döner
    // <=    küçük eşit a<=b    a küçük veya eşitse true döner


}
