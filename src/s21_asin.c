#include "s21_math.h"

long double s21_asin(double x) {
    long double arcsin = s21_NAN;

    if (x > - 0.9  && x < 0.9) {
        arcsin = x;
        long double row = x;
        int i = 2;
        int j = 0;
        while (j < 1500) {
            row = row * x * x * (i - 1) * (i - 1) / (i * (i + 1));
            i += 2;
            arcsin += row;
            j++;
        }
    } else if (x <= 1.0 && x >= 0.9) {
        arcsin = s21_PI / 2 - s21_asin(s21_sqrt(1 - x * x));
    } else if (x >= -1.0 && x <= - 0.9) {
        arcsin = - s21_PI / 2 + s21_asin(s21_sqrt(1 - x * x));
    }

    return (arcsin);
}
