#include "s21_math.h"

long double s21_acos(double x) {
    long double arccos = 1.0;

    arccos = (s21_PI / 2) - s21_asin(x);

    return (arccos);
}
