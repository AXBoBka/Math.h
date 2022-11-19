#include <stdio.h>
#include "s21_math.h"
#include <math.h>


int main() {
    double f = 0.5;

    printf("%.30lf\n", ceil(f));
    printf("%.30Lf\n", s21_ceil(f));

    return (0);
}
