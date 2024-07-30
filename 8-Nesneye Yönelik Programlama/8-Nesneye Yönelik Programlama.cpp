#include <iostream>

class Math {
public:
    int a;
    int b;
    int result = 0;
    void topla() { this->result = this->a + this->b; }  //Metot
    void print() { std::cout << this->result<<'\n'; }

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

private: //hiçbir yerden erişilemez
    std::string payment_id = "123456"; 


protected: //Miras alan bir class erişebilir
    void sorgula() {

        std::cout << "Payment ID numarası:" + this->payment_id << '\n';
    }

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


}

