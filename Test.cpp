/**
 * AUTHORS: Inon Sinn
 * 
 * Date: 05/04/2022
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "Matrix.hpp"
#include "doctest.h"

using namespace zich;

TEST_CASE("Plus minus"){

    
};

TEST_CASE("Comparison"){

    
    std::vector<double> arr1 = {3, 0, 0, 0, 3, 0, 0, 0, 3};
    std::vector<double> arr2 = {3, 0, 0, 0, 3, 0};
    Matrix a{arr1, 3, 3}; // sum = 9
    Matrix b{arr2, 3, 2};

    // Check throws for bad input
    CHECK_THROWS(a<b);
    CHECK_THROWS(a<=b);
    CHECK_THROWS(a>b);
    CHECK_THROWS(a>=b);
    CHECK_THROWS(a==b);
    CHECK_THROWS(a!=b);

    std::vector<double> arr3 = {1, 1, 1, 1, 2, 1, 1, 1, 1};
    Matrix c{arr3, 3, 3}; // sum = 10

    // Check correctness

    // >
    CHECK_FALSE(a>b);
    CHECK_EQ(b>a,true);
    // >=
    CHECK_FALSE(a>=b);
    CHECK_EQ(a>=a,true);
    // <
    CHECK_FALSE(b<a);
    CHECK_EQ(a<b,true);
    // <=
    CHECK_FALSE(b<=a);
    CHECK_EQ(a<=a,true);
    // ==
    CHECK_FALSE(a==b);
    CHECK_EQ(a==a,true);
    // !=
    CHECK_FALSE(a!=a);
    CHECK_EQ(a!=b,true);

};

TEST_CASE("prefix and postfix"){
    std::vector<double> arr1 = {0,0,1,1};
    std::vector<double> arr2 = {1,1,2,2};
    std::vector<double> arr3 = {2,2,3,3};
    Matrix a{arr1, 2, 2};
    Matrix b{arr1, 2, 2};
    Matrix c{arr1, 2, 2};

    // prefix
    CHECK_EQ((--c)==b,true);
    CHECK_EQ((++a)==b,true);
    
    Matrix a{arr1, 2, 2};
    Matrix b{arr1, 2, 2};
    Matrix c{arr1, 2, 2};

    // postfix
    CHECK_EQ((c--)==b,false);
    CHECK_EQ((a++)==b,false);
};

TEST_CASE("Multiplication"){
    
};
