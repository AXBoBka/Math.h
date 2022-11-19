#include "s21_math.h"

double check_value_x(double x) {
    while (x > s21_PI || x < -s21_PI) {
        if (x > s21_PI)
            x = x - 2 * s21_PI;
        else
            x = x + 2 * s21_PI;
    }
    return (x);
}
