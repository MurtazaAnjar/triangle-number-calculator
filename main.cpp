#include <iostream>
#include <list>
#include "src/triangleNumberCalculator.h"

int main() {
    TriangleNumberCalculator calc;

    std::cout << "value(1) = " << calc.value(1) << std::endl;
    std::cout << "value(5) = " << calc.value(5) << std::endl;   // 1+2+3+4+5 = 15

    std::cout << "add(3, 4) = " << calc.add(3, 4) << std::endl;

    std::cout << "subtract(6, 3) = " << calc.subtract(6, 3) << std::endl;

    std::cout << "multiply(4, 3) = " << calc.multiply(4, 3) << std::endl;

    std::cout << "divide(6, 3) = " << calc.divide(6, 3) << std::endl;

    std::list<int> seq = calc.sequence(10);
    std::cout << "sequence(10): ";
    for (int x : seq)
        std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}