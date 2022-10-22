#include <iostream>
#include <string>

template<typename T>
T larger(T a, T b) {
    return a > b ? a : b;
}

double larger(double a, double b) {
    return a > b ? a : b;
}


int main() {
    std::cout << "Larger of 1.5 and 2.5 is " << larger(1.5, 2.5) << std::endl;
    return 0;
}