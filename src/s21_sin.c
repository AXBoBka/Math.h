#include "s21_math.h"

long double s21_sin(double x) {
    x = check_value_x(x);
    long double res = x;
    long double sin_x = x;
    int i = 1;

    while (s21_fabs(res) > s21_EPS) {
        res = -1 * res * x * x / (2 * i * (2 * i + 1));
        sin_x += res;
        i += 1;
    }

    return (sin_x);
}
