#include "triangleNumberCalculator.h"
#include <list>

int TriangleNumberCalculator::value(int n) {
    if (n==1)
        return 1;
    return (n+value(n-1));
}

int TriangleNumberCalculator::add(int n, int m) {
    return value(n) + value(m);
}

int TriangleNumberCalculator::subtract(int n, int m) {
    return value(n) - value(m);
}

int TriangleNumberCalculator::multiply(int n, int m) {
    return value(n) * value(m);
}

double TriangleNumberCalculator::divide(int n, int m) {
    return static_cast<double>(value(n)) / static_cast<double>(value(m));
}

std::list<int> TriangleNumberCalculator::sequence(int n) {
    std::list<int> result;
    for (int i = 1; i <= n; i++)
        result.push_back(value(i));
    return result;
}






