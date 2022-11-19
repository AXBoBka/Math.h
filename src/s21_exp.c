#include "s21_math.h"

long double s21_exp(double x) {
    long double rez = 1, y = 1;
    long double i = 1;
    int sign = 0;
    if (x < 0) {
        x *= -1;
        sign = 1;
    }
    while (s21_fabs(rez) > s21_EPS) {
        rez *= x / i;
        i++;
        y += rez;
        if (y > s21_MAX_DOUBLE) {
            y = s21_INF;
            break;
        }
    }
    y = sign == 1 ? y > s21_MAX_DOUBLE ? 0 : 1. / y : y;
    return y = y > s21_MAX_DOUBLE ? s21_INF : y;
}
