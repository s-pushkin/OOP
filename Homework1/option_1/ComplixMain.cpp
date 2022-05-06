#include "Complex.h"
#include "iostream"
int algoritm() {
    int odin, dva, tri, chetire;
    std::cin >> odin >> dva >> tri >> chetire;
    complexNumber value1 {};
    complexNumber value2 {};
    complexNumber abs {};
    value2.setValues(odin, dva);
    value1.setValues(tri , chetire);
    abs.setValues(odin, dva);
    double a;
    a = abs.abs();
    std::cout << a << std::endl;
    std::cout << value1 + value2 << std::endl;
    std::cout << value1 - value2 << std::endl;
    std::cout << value1 * value2 <<std::endl;
    std::cout << value1 / value2 << std::endl;
    return 0;
}