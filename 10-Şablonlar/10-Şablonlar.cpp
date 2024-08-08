#include <iostream>


template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b; 

}

template <typename K, typename L>
L min(K a, L b) {
    return (a < b) ? a : b;
}

template <typename j>

class Math {
public: 
    j A{}; //varsayılan değer ataması
    j B{};

    j sum() {
        return  A+B;   
    }


};

int main()
{
    //std::cout << max(5, 10); //10
    //std::cout << max(10.5, 10.1); //10.5
    std::cout << min(5, 5.5); //5

    Math<int> math;
    math.A = 10;
    math.B = 20;
    std::cout << math.sum(); //30

    Math<float> math2;
    math2.A = 10.1;
    math2.B = 10.2;
    std::cout << math2.sum(); //20.3

   
   



}

