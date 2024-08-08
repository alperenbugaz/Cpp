#include <iostream>

class Object {
public:
    Object(){
        std::cout << "Object Created\n";
    }
    ~Object() {

        std::cout << "Object Deleted\n";
    }

};


class A {


};

class B {
public:
    int* a = nullptr;
    int* b = nullptr;

    B(int first, int second) {
        a = new int;
        b = new int;
        *a = first;
        *b = second;
    }
    ~B() {
        delete a; //class bellekten kaldırılsa bile classın içerisindeki değişkenler de bellekten ayrıyeten kaldırılmalı
        delete b; //bu class a ait değişkenleri bellekten kaldırılmadığı takdirde class kaldırılsa bile bellekte değişkenler kalır.

    }

};

class BSharedPointer {
public:
    int a{};

    BSharedPointer() {
        std::cout << "Created\n";

    }

    ~BSharedPointer() {
        std::cout << "Deleted\n";

    }


};
int main()
{
   
    // Object object;  //object created - Hello World - Object deleted
   // {Object object1; } //object created - Object Deleted - Hello World

    
    Object* object = new Object;  // Object created - Hello World //object, stack yerine heapde oluştu ve silinmedi silinmesi için (delete) komutu kullanılmalı
    delete object; //object created-object deleted-hello World

    std::cout << "Hello World!\n";

    //---------------------------------------------------------------------------------------------------------
    int number;
    
    std::cout << "Dizi indis sayısını girin:\n";
    

    std::cin >> number;
    //int list [number] //c++ da dinamik bir dizi oluşturabilmek için liste heapte oluşturulmalı.
    int* list = new int [number];  

    for (int i = 0;i < number;i++) {

        std::cout << i +".indis sayısını girin:\n";
        std::cin >> list[i];

    }
   
    std::cout << "girilen dizi elemanları:\n";
    for (int j = 0;j < number;j++) {
        std::cout << list[j];

    }
    //delete list; //bu ifade yalnızca listenin ilk elemanını siler
    delete[] list;


    typedef int integer; //integer adında yeni tanımlamalara olanak sağlanmış oldu. integer değişkeni de int kurallarını kapsar.

    integer p1 = 10; // 


    int* cpp = new int; //cpp
    int* c = (int*)malloc(sizeof(int)); //malloc fonksiyonu bellekte yer ayırmaya yarar. "int* cpp = new int" ifadesinin c karşılığıdır.
    
    int* t = nullptr; //boş bir yer göster
    t = new int; //
    *t = 10;

    //A* aclass = (A*) malloc(sizeof(A));  
    //free(aclass); //bu ifade cpp da çalışamaz!!!   delete ve new kullanılmalı!!

    B* b = new B(10, 10); //class heap'e eklendi
    delete b; //class bellekten kaldırıldı


    std::shared_ptr <BSharedPointer> ptr = std::make_shared<BSharedPointer>(); // shared pointer bu delete ve new e ihtiyaç duymaadn heap belleğinde class oluşturur.
    //ptr pointerı stackte oluşturulur onu işaret eden pointerlar heapde oluşturulur  
    std::shared_ptr <BSharedPointer> ptr2 = ptr; 

    std::cout << ptr.use_count(); //nesneyi işaret eden kaç adet işaretçi var = 2 


}