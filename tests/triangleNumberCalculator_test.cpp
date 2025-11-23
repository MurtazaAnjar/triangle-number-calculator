#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/triangleNumberCalculator.h"
#include <iostream>

TEST_CASE( "value method returns accurate triangle numbers" ) {
    TriangleNumberCalculator test;
    REQUIRE( test.value(1) == 1 );
    REQUIRE( test.value(2) == 3 );
    REQUIRE( test.value(3) == 6 );
}

TEST_CASE( "add works properly" ) {
    TriangleNumberCalculator test;
    REQUIRE( test.add(1,1) == 2 );
    REQUIRE( test.add(2,3) == 9 );
    REQUIRE( test.add(4,2) == 13 );
}

TEST_CASE( "subtract works properly" ) {
    TriangleNumberCalculator test;
    REQUIRE( test.subtract(1,1) == 0 );
    REQUIRE( test.subtract(2,3) == -3 );
    REQUIRE( test.subtract(4,2) == 7 );
}

TEST_CASE( "multiply works properly" ) {
    TriangleNumberCalculator test;
    REQUIRE( test.multiply(1,1) == 1 );
    REQUIRE( test.multiply(2,3) == 18 );
    REQUIRE( test.multiply(4,2) == 30 );
}

TEST_CASE( "divide works properly" ) {
    TriangleNumberCalculator test;
    REQUIRE( test.divide(1,1) == (1.0/1.0) );
    REQUIRE( test.divide(2,3) == (3.0/6.0) );
    REQUIRE( test.divide(4,2) == (10.0/3.0) );
}

TEST_CASE( "sequence works properly" ) {
    TriangleNumberCalculator test;
    std::list<int> one = {1};
    std::list<int> ten = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55};
    REQUIRE( test.sequence(1) == one );
    REQUIRE( test.sequence(10) == ten);
}
