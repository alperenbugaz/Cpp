#include <iostream>
#include <string>  //https://en.cppreference.com/w/cpp/string
#include <fstream> // dosya işlemleri ile ilgili kütüphane
using namespace std; //std kütüphanesini tanımladığımız için std:: ifadesine tanımlamamıza gerek kalmadı

namespace library {

    int number = 10;
    void hello() {

        std::cout << "Hello!\n";

    }


}

namespace library2 {

    int number = 10;
    void hello() {

        std::cout << "Hello2!\n";

    }


}




int main()
{
    library::hello(); //kütüphanede aynı isimde fonksiyonlar varsa önlem amaçlı kütüphane adı önce verilir.
    library2::hello();

    cout << "test\n"; //using namespace std


   // https://en.cppreference.com/w/  c++ standart kütüphaneleri

    string value = "";

    cout << value.empty(); //https://en.cppreference.com/w/  -> empty: checks whether the string is empty

    cout << value.insert(0, "add");

    string *filename = new string; //kullanıcıdan yazı stringi alabilmek için string ifadenin adresi oluşturuldu.
    ofstream* file = new ofstream ("file.txt");  //oluşturulacak dosya için pointer oluşturuldu

    if (file->is_open()) {
        cout << "dosya oluşturuldu\n"; //using namespace std
        cin >> *filename; //kullanıcıdan ismi al
        *file << *filename; 
        file->close();
    }
    
}
