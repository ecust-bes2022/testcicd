#include "math_lib.h"
#include <cstring>
#include<iostream>

namespace math_lib {

int add(int a, int b) {
    std::cout<<"add"<<std::endl;
    return a + b;
}

int subtract(int a, int b) {
    std::cout<<"subtract"<<std::endl;
    return a - b;
}

const char* get_version() {
    std::cout<<"get_version"<<std::endl;
    return MATH_LIB_VERSION_STRING;
}

}