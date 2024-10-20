#ifndef MATH_LIB_H
#define MATH_LIB_H

#include "version.h"

#ifdef _WIN32
    #ifdef MATH_LIB_EXPORTS
        #define MATH_LIB_API __declspec(dllexport)
    #else
        #define MATH_LIB_API __declspec(dllimport)
    #endif
#else
    #define MATH_LIB_API
#endif

namespace math_lib {

MATH_LIB_API int add(int a, int b);
MATH_LIB_API int subtract(int a, int b);
MATH_LIB_API const char* get_version();

}

#endif // MATH_LIB_H