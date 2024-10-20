#include "math_lib.h"
#include <cstring>

namespace math_lib {

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

const char* get_version() {
    return MATH_LIB_VERSION_STRING;
}

}