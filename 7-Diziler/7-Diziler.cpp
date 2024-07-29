#include <iostream>
void func1(int Array[2]);

int main()
{
    int puan1 = 10;
    int puan2 = 20;
    int puan3 = 30;
    int puan4 = 40;
    int puanlar[4] = { puan1, puan2, puan3, puan4 }; 
    int a = puanlar[0];
    int puanlar2[2] = { 100,90 }; //static array

    std::cout << a << '\n'; //10--puan1


    int randomArray[5];
    std::cout << randomArray[0] << '\n'; //random value

    int Array1[5] = {}; //initialize all elements to 0
    std::cout << Array1[0] << '\n'; //0
    std::cout << Array1[1] << '\n'; //0
    std::cout << Array1[2] << '\n'; //0
    std::cout << Array1[3] << '\n'; //0
    std::cout << Array1[4] << '\n'; //0


    int Array2[2] = { 1,2 };

    std::cout << Array2 << '\n'; //Adress
    std::cout << *Array2 << '\n'; //1 
    std::cout << *Array2 + 1 << '\n'; //2

    int Array3[4] = { 100,200,300,400 };

    for (int i = 0;i < 4;i++) {

        std::cout << Array3[i] << '\n'; //100 200 300 400

    }


    char Array4[1][1]{ {'a'} };
    std::cout << Array4[0][0] << '\n'; //a

    char Array5[1][1][1]{ { {'b'} } };
    std::cout << Array5[0][0][0] << '\n'; //b


    char Array6[3][2]{ {'a','l'},{'p','e'},{'r','e'}};
    std::cout << Array6[2][1] << '\n'; //e

    char Array7[4][2]{ {'a','l'},{'p','e'},{'r','e'},{'n'}};

    for (int i = 0;i < 4;i++) {
        for (int i2 = 0;i2 < 2;i2++) {
            std::cout << Array7[i][i2] << '\n'; // a l p e r e n
        }
    }
    const int number = 10; 
    int Array8[number] = { 0,1,2,3,4,5,6,7,8,9 }; //static array
    int arraylenght = std::size(Array8);

    std::cout << arraylenght << '\n'; // 10

    int Array9[2] = { 1,2 };

    func1(Array9);
}

void func1(int Array [2]) {

 
    std::cout << Array << '\n'; // Adress
    for (int i = 0;i < 2;i++) {

        std::cout << Array[i] << '\n'; // 1 2 



    }

}