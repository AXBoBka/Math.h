#include "s21_math.h"

long double s21_floor(double x) {
    long long int ceil_l = (long long int)x;

    if (ceil_l > x)
        ceil_l--;

    return (ceil_l);
}
