#include "s21_math.h"

long double s21_fmod(double x, double y) {
    long double res = x;
    if (y == 0.0)
        res = s21_NAN;
    else if (y != 0.0)
        res = x - ((long long int)(res / y) * y);
    return (res);
}
