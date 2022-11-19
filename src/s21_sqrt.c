#include "s21_math.h"

long double s21_sqrt(double x) {
    long double result = 4.0;
    long double tmp = 0.0;

    for (; s21_fabs(result - tmp) > s21_EPS;) {
        if (x < 0) {
            result = s21_NAN;
            break;
        }
        tmp = result;
        result = (tmp + x / tmp) / 2;
    }

    return (result);
}
