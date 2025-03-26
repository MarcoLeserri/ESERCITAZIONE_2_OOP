#include <iostream>
#include "complex_number.hpp"

int main(void) {
    using cmplx = complex_number<float>;
    
    cmplx c1(3.5, 2.7);
    cmplx c2(5.8, 1.2);
    
    std::cout << c1 << " + " << c2 << " = " << c1+c2 << std::endl;
    cmplx c3 = c1+c2;
    cmplx conj3 = c3.conj();
    std::cout << "Il coniugato di " << c3 << " è " << conj3;
    
    std::cout << c1 << " * " << c2 << " = " << c1*c2 << std::endl;
};