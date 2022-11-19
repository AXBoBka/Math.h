#include "s21_math.h"

long double s21_cos(double x) {
    x = check_value_x(x);
    long double cos_x = s21_sin((s21_PI / 2.0) - x);

    return (cos_x);
}
