#include "s21_math.h"

long double s21_tan(double x) {
    x = check_value_x(x);
    return (s21_sin(x) / s21_cos(x));
}
