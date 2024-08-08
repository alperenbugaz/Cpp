#include <iostream>

class Math {
public:
    int a;
    int b;
    int result = 0;
    void topla() { this->result = this->a + this->b; }  //Metot
    void print() { std::cout << this->result << '\n'; }

    int width;
    int height;

    void calculatearea() { std::cout << this->width * this->height << '\n'; }


};


class Payment {
public: //her yerden erişilebilir
    std::string parabirimi = "TL";
    std::string Tutar = "0.0";

    void sorgula() {

        std::cout << "Veriler bankaya gönderiliyor. Parabirimi:" + this->parabirimi + "Tutar:" + this->Tutar << '\n';
    }

private: //hiçbir yerden erişilemez //default
    std::string payment_id = "123456";


protected: //Miras alan bir class erişebilir

    std::string msg = "";

};


class Test :public Payment {

protected:
    void changeparametre() {
        Payment::msg = "Alperen";
        Payment::parabirimi = "Euro";
        Payment::Tutar = "100";
        //Payment::payment_id 'ye private olduğu için erişilemez
    };

};


class Country { //base class
public:
    int population;
    std::string capitalcity;

    Country() {
        std::cout << "Start Country" << '\n';
    }

    ~Country() {
        std::cout << "Stop Country" << '\n';
    }
}; //soyut sınıf

class Turkiye : public Country { //derived class 
public:
   
   
    
    void info() {
    
            
        int pop = this->population;
        std::string capital = this->capitalcity;
        std::cout << "Capital City:" ;
        std::cout << capital << '\n';


    }
    Turkiye() {
        std::cout << "Start Turkiye "  << '\n';

    }
    ~Turkiye() {
        std::cout << "Stop Turkiye" << '\n';
    }
};

class Germany : public Country { //derived class 
public:
    Germany() {
        std::cout << "Start Germany " << '\n';

    }
    ~Germany() {
        std::cout << "Stop Germany" << '\n';
    }
};

class UnsignedNumber {

private:
    int number;

public:
    void controlnumber(int t) {

        if (t > 0) {

            number = t;
        }

        else {
            number = -1 * t;
        }
        shownumber();

    }
    void shownumber() {

        std::cout << number << '\n';

    }



};

class Car {
public:
    int speed;
    int color;
    std::string country;
    virtual void showcolor() =0 ; //sanal metot
};

class Mercedes : public Car {

    void showcolor() {
        std::cout << "Siyah" << '\n';

    }

};

class BMW : public Car {

    void showcolor() {
        std::cout <<"Beyaz" << '\n';

    }

};

class Ferrari : public Car {

    void showcolor() {
        std::cout << "Kırmızı" << '\n';

    }
};


class Animals { //Abstract 

public:
    int a; //soyut sınıflarda değişken bulunabilir. Değişken bulunmazsa Interface olur.
    int b;
    virtual void Sound() = 0; //Soyut sınıflarda gövdesiz metotlar bulunur

};

class Dog: public Animals{
   
public:
    void Sound() {

        std::cout << "Hav";
    }

};

class Cat :public Animals {
public:
    void Sound() {

        std::cout << "Miyav";
    }

};

class Duck :public Animals {
public:
    void Sound() {

        std::cout << "Vak";
    }

};

void AnimalsSound(Animals* Animalsptr) {

    Animalsptr->Sound();

}


void showcarcolors(Car* CarPtr) {

    CarPtr->showcolor();

}

void counter() {
    static int a = 0; //bu değişken statik olduğu için hep adreste tutulur. Atama işlemi yalnızca fonksiyon ilk çalıştığında gerçekleşir.
    a++;
    std::cout <<'\n';

    std::cout << a << '\n';
}


class Book {

public:
    static int pieces ; //statik değişkenlerin atamaları class içinde yapılmamalı
    Book() {

        pieces++;
    }
};
int Book::pieces = 0; //class içinde atama yapılamaz


int main()
{

    Math mat;
    mat.a = 5;
    mat.b = 10;
    mat.topla();
    mat.print();

    mat.width = 20;
    mat.height = 30;
    mat.calculatearea();

    Payment pay;

    Turkiye TR;
    TR.population = 80;
    TR.capitalcity = "Ankara";
    std::cout << TR.population << '\n'; //80
    
    TR.info(); //Ankara

    Turkiye* TRPtr = &TR;
    std::cout << TRPtr << '\n'; //ADRESS
    

    TRPtr->population = 100;
    std::cout << "TR Population:"; 

    std::cout <<  TR.population << '\n'; //100

    //reference
    int number1 = 10;
    int& refnumber1 = number1;

    refnumber1 = 20;

    std::cout <<  number1 << '\n';; //20 referans alan değişken değişirse normal değişken de değişir

    number1 = 30;
    std::cout << refnumber1 << '\n';; //30


    //Kapsülleme
    UnsignedNumber UN;
    UN.controlnumber(5); //5
    UN.controlnumber(-5); //5

    Mercedes MercedesCar;
    Ferrari FerrariCar;
    BMW BMWCar;

    showcarcolors(&MercedesCar); //siyah
    showcarcolors(&FerrariCar); //kırmızı
    showcarcolors(&BMWCar); //beyaz

    //Animals animal; //soyut sınıflardan nesne türetilemez başka sınıfları yönetmek için kullanılır.

    Cat cat;
    Dog dog;

    AnimalsSound(&cat); //miyav
    AnimalsSound(&dog); //hav

    counter(); //1
    counter(); //2
    counter(); //3
    
    
    Book book;
    Book book2;
    
    //book.pieces = 10;
    //std::cout << book.pieces << '\n';; //10
    //book2.pieces = 20;
    //std::cout << book2.pieces << '\n';; //20
    //std::cout << book.pieces << '\n';; //20

    std::cout << Book::pieces; //2


}
