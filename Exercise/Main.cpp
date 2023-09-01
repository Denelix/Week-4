#include <iostream>
#include "Math.h"

int main() {
    Math<int> num1(5, 6);
    Math<float> num2(5.1, 6.2);
    std::cout << "Int: " << num1.getNumerator() << "/" << num1.getDenominator() << std::endl;
    std::cout << "Float: " << num2.getNumerator() << "/" << num2.getDenominator() << std::endl;
    std::cout << "Result of division float: " << num2.divide();

    return 0;
}