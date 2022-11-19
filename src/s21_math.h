#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <math.h>
#include <stdio.h>


#define s21_PI 3.14159265358979324
#define s21_NAN 0.0 / 0.0
#define s21_N_NAN -0.0 / 0.0
#define s21_INF 1.0 / 0.0
#define s21_NINF -1.0 / 0.0
#define s21_EPS 1e-17
#define s21_LN10 2.30258509299
#define s21_EXP 2.71828182845904
#define s21_MAX_DOUBLE 1.7976931348623157e308

int         s21_abs(int x);  // сделано
double      check_value_x(double x);
long double s21_acos(double x);  // сделано, тесты
long double s21_asin(double x);  // сделаноб тесты
long double s21_atan(double x);  // сделать!
long double s21_ceil(double x);  // сделано, тесты
long double s21_cos(double x);  // сделано
long double s21_exp(double x);  // сделано, тесты
long double s21_fabs(double x);  // сделано
long double s21_floor(double x);  // сделано, тесты
long double s21_fmod(double x, double y);  // сделано
long double s21_log(double x);  // сделано, тесты
long double s21_pow(double base, double exp);  // сделано,  поработать с округлением
long double s21_sin(double x);  // сделано
long double s21_sqrt(double x);  // сделано, поработать с округлением
long double s21_tan(double x);  // сделать!
long double s21_atan(double x);


#endif  // SRC_S21_MATH_H_
