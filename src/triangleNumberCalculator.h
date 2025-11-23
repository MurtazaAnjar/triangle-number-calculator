#pragma once
#include <list>

class TriangleNumberCalculator {
    public:
        int value(int n);
        int add(int n, int m);
        int subtract(int n, int m);
        int multiply(int n, int m);
        double divide(int n, int m);
        std::list<int> sequence(int n);
};