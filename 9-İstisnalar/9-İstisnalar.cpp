#include <iostream>

class ErrorManagemnt {
private:
    std::string message;

public:
    ErrorManagemnt(std::string message) {
        this->message = message;

    }

    std::string yaz() {
        
        return this->message;
    }
};

int division(int a, int b) {

    try {
        if (b == 0) {
            throw  ErrorManagemnt("Math Error"); //throw,hata durumunda "Math error" stringini catche gönderir

        }
        else if (a > b) {
            std::cout << a / b;
            return a/b;
        }

    }
    catch (ErrorManagemnt Error) {
        std::cout << Error.yaz();
    }
}

int main()
{
    int a = 10;
    int b = 1;
    int c = 0;
    division(a, b); //10
    division(a, c); //"Math Error" mesajı
}
