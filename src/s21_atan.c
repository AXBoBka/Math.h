#include "s21_math.h"

static long double check_arctan(double x);

long double s21_atan(double x) {
    long double arctan = 0;

    if (x < 1 && x > -1) {
        arctan = check_arctan(x);
    }

    if (x == 1) {
        arctan = s21_PI / 4;
    }

    if (x == -1) {
        arctan = -1 * s21_PI / 4;
    }

    if (x == 0) {
        arctan = 0;
    }

    if (x > 1) {
       arctan = s21_PI / 2 - check_arctan(1 / x);
    }

    if (x < -1) {
        arctan = -s21_PI / 2 - check_arctan(1 / x);
    }

    return (arctan);
}

static long double check_arctan(double x) {
    long double res = x;
    long double arctan = x;
    int i = 1;

    while (s21_fabs(res) > s21_EPS) {
        res = -1 * res * x * x * (2 * i - 1) / (2 * i + 1);
        arctan += res;
        i += 1;
    }

    return (arctan);
}
