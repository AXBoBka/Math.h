#include "s21_math.h"
#include <check.h>
#include <math.h>
#include <stdlib.h>

double a1 = 0;
double a2 = 0.3;
double a3 = 1;
double a4 = 1.3;
double a5 = 2;
double a6 = 2.3;
double a7 = 3;
double a8 = 3.3;
double a9 = 2567.5678;
double m1 = -5;
double m2 = -0.3;
double m3 = -1;
double m4 = -1.3;
double m5 = -2;
double m6 = -2.3;
double m7 = -3;
double m8 = -3.3;
double m9 = -2567.5678;

double nul = 0;
double f = 1.02165484;
double d = 3;
double w = 0.354;
double minus_w = -0.354;
double ff = 0.1256154;
double minus_f = -0.1256154;
double big_f = 1256154123456789;
double minus_big_f = -1256154123456789;

int x_abs = 123456;
int x_abs_minus = -123456;
int abc_nul = 0;

START_TEST(s21_log_test) {
    ck_assert_ldouble_eq(s21_log(a1), log(a1));
    ck_assert_ldouble_eq_tol(s21_log(a2), log(a2), 1e-6);
    ck_assert_ldouble_eq_tol(s21_log(a3), log(a3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_log(a4), log(a4), 1e-6);
    ck_assert_ldouble_eq_tol(s21_log(a5), log(a5), 1e-6);
    ck_assert_ldouble_eq_tol(s21_log(a6), log(a6), 1e-6);
    ck_assert_ldouble_eq_tol(s21_log(a7), log(a7), 1e-6);
    ck_assert_ldouble_eq_tol(s21_log(a8), log(a8), 1e-6);
    ck_assert_ldouble_eq_tol(s21_log(a9), log(a9), 1e-6);
    ck_assert_ldouble_nan(s21_log(m1));
    ck_assert_ldouble_nan(s21_log(m2));
    ck_assert_ldouble_nan(s21_log(m3));
    ck_assert_ldouble_nan(s21_log(m4));
    ck_assert_ldouble_nan(s21_log(m5));
    ck_assert_ldouble_nan(s21_log(m6));
    ck_assert_ldouble_nan(s21_log(m7));
    ck_assert_ldouble_nan(s21_log(m8));
    ck_assert_ldouble_nan(s21_log(m9));
}
END_TEST

START_TEST(s21_pow_test) {
    ck_assert_ldouble_eq_tol(s21_pow(a1, a1), pow(a1, a1), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a1, a2), pow(a1, a2), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a1, a3), pow(a1, a3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a1, a5), pow(a1, a5), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a1, a8), pow(a1, a8), 1e-6);
    ck_assert_ldouble_eq(s21_pow(a1, m1), pow(a1, m1));
    ck_assert_ldouble_eq(s21_pow(a1, m2), pow(a1, m2));
    ck_assert_ldouble_eq(s21_pow(a1, m3), pow(a1, m3));
    ck_assert_ldouble_eq(s21_pow(a1, m5), pow(a1, m5));
    ck_assert_ldouble_eq(s21_pow(a1, m8), pow(a1, m8));

    ck_assert_ldouble_eq_tol(s21_pow(a2, a1), pow(a2, a1), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a2, a2), pow(a2, a2), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a2, a3), pow(a2, a3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a2, a5), pow(a2, a5), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a2, a8), pow(a2, a8), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a2, m1), pow(a2, m1), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a2, m2), pow(a2, m2), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a2, m3), pow(a2, m3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a2, m5), pow(a2, m5), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a2, m8), pow(a2, m8), 1e-6);

    ck_assert_ldouble_eq_tol(s21_pow(a3, a1), pow(a3, a1), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a3, a2), pow(a3, a2), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a3, a3), pow(a3, a3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a3, a5), pow(a3, a5), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a3, a8), pow(a3, a8), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a3, m1), pow(a3, m1), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a3, m2), pow(a3, m2), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a3, m3), pow(a3, m3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a3, m5), pow(a3, m5), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a3, m8), pow(a3, m8), 1e-6);

    ck_assert_ldouble_eq_tol(s21_pow(a6, a1), pow(a6, a1), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a6, a2), pow(a6, a2), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a6, a3), pow(a6, a3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a6, a5), pow(a6, a5), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a6, a8), pow(a6, a8), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a6, m1), pow(a6, m1), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a6, m2), pow(a6, m2), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a6, m3), pow(a6, m3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a6, m5), pow(a6, m5), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a6, m8), pow(a6, m8), 1e-6);

    ck_assert_ldouble_eq_tol(s21_pow(a9, a1), pow(a9, a1), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a9, a2), pow(a9, a2), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a9, a3), pow(a9, a3), 1e-6);
    // ck_assert_ldouble_eq_tol(s21_pow(a9, a5), pow(a9, a5), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a9, m1), pow(a9, m1), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a9, m2), pow(a9, m2), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a9, m3), pow(a9, m3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a9, m5), pow(a9, m5), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(a9, m8), pow(a9, m8), 1e-6);

    ck_assert_ldouble_eq_tol(s21_pow(m1, a1), pow(m1, a1), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m1, a2));
    ck_assert_ldouble_eq_tol(s21_pow(m1, a3), pow(m1, a3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(m1, a5), pow(m1, a5), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m1, a8));
    ck_assert_ldouble_eq_tol(s21_pow(m1, m1), pow(m1, m1), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m1, m2));
    ck_assert_ldouble_eq_tol(s21_pow(m1, m3), pow(m1, m3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(m1, m5), pow(m1, m5), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m1, m8));

    ck_assert_ldouble_eq_tol(s21_pow(m2, a1), pow(m2, a1), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m2, a2));
    ck_assert_ldouble_eq_tol(s21_pow(m2, a3), pow(m2, a3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(m2, a5), pow(m2, a5), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m2, a8));
    ck_assert_ldouble_eq_tol(s21_pow(m2, m1), pow(m2, m1), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m2, m2));
    ck_assert_ldouble_eq_tol(s21_pow(m2, m3), pow(m2, m3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(m2, m5), pow(m2, m5), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m2, m8));

    ck_assert_ldouble_eq_tol(s21_pow(m3, a1), pow(m3, a1), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m3, a2));
    ck_assert_ldouble_eq_tol(s21_pow(m3, a3), pow(m3, a3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(m3, a5), pow(m3, a5), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m3, a8));
    ck_assert_ldouble_eq_tol(s21_pow(m3, m1), pow(m3, m1), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m3, m2));
    ck_assert_ldouble_eq_tol(s21_pow(m3, m3), pow(m3, m3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(m3, m5), pow(m3, m5), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m3, m8));

    ck_assert_ldouble_eq_tol(s21_pow(m6, a1), pow(m6, a1), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m6, a2));
    ck_assert_ldouble_eq_tol(s21_pow(m6, a3), pow(m6, a3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(m6, a5), pow(m6, a5), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m6, a8));
    ck_assert_ldouble_eq_tol(s21_pow(m6, m1), pow(m6, m1), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m6, m2));
    ck_assert_ldouble_eq_tol(s21_pow(m6, m3), pow(m6, m3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(m6, m5), pow(m6, m5), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m6, m8));

    ck_assert_ldouble_eq_tol(s21_pow(m9, a1), pow(m9, a1), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m9, a2));
    ck_assert_ldouble_eq_tol(s21_pow(m9, a3), pow(m9, a3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(m9, a5), pow(m9, a5), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m9, a8));
    ck_assert_ldouble_eq_tol(s21_pow(m9, m1), pow(m9, m1), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m9, m2));
    ck_assert_ldouble_eq_tol(s21_pow(m9, m3), pow(m9, m3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_pow(m9, m5), pow(m9, m5), 1e-6);
    ck_assert_ldouble_nan(s21_pow(m9, m8));
}
END_TEST

START_TEST(s21_sqrt_test) {
    ck_assert_ldouble_eq_tol(s21_sqrt(a1), sqrt(a1), 1e-6);
    ck_assert_ldouble_eq_tol(s21_sqrt(a2), sqrt(a2), 1e-6);
    ck_assert_ldouble_eq_tol(s21_sqrt(a3), sqrt(a3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_sqrt(a4), sqrt(a4), 1e-6);
    ck_assert_ldouble_eq_tol(s21_sqrt(a5), sqrt(a5), 1e-6);
    ck_assert_ldouble_eq_tol(s21_sqrt(a6), sqrt(a6), 1e-6);
    ck_assert_ldouble_eq_tol(s21_sqrt(a7), sqrt(a7), 1e-6);
    ck_assert_ldouble_eq_tol(s21_sqrt(a8), sqrt(a8), 1e-6);
    ck_assert_ldouble_eq_tol(s21_sqrt(a9), sqrt(a9), 1e-6);
    ck_assert_ldouble_nan(s21_sqrt(m1));
    ck_assert_ldouble_nan(s21_sqrt(m2));
    ck_assert_ldouble_nan(s21_sqrt(m3));
    ck_assert_ldouble_nan(s21_sqrt(m4));
    ck_assert_ldouble_nan(s21_sqrt(m5));
    ck_assert_ldouble_nan(s21_sqrt(m6));
    ck_assert_ldouble_nan(s21_sqrt(m7));
    ck_assert_ldouble_nan(s21_sqrt(m8));
    ck_assert_ldouble_nan(s21_sqrt(m9));
}
END_TEST

START_TEST(task_s21_tan) {
    ck_assert_double_eq_tol(s21_tan(1), tan(1), 1e-6);
    ck_assert_double_eq_tol(s21_tan(-1), tan(-1), 1e-6);
    ck_assert_double_eq_tol(s21_tan(nul), tan(nul), 1e-6);
    ck_assert_double_eq_tol(s21_tan(ff), tan(ff), 1e-6);
    ck_assert_double_eq_tol(s21_tan(minus_f), tan(minus_f), 1e-6);
}
END_TEST

START_TEST(task_s21_ceil) {
    ck_assert_double_eq(s21_ceil(f), ceil(f));
    ck_assert_double_eq(s21_ceil(d), ceil(d));
    ck_assert_double_eq(s21_ceil(nul), ceil(nul));
    ck_assert_double_eq(s21_ceil(ff), ceil(ff));
    ck_assert_double_eq(s21_ceil(minus_f), ceil(minus_f));
    ck_assert_double_eq(s21_ceil(big_f), ceil(big_f));
    ck_assert_double_eq(s21_ceil(minus_big_f), ceil(minus_big_f));
}
END_TEST

START_TEST(task_s21_exp) {
    ck_assert_double_eq_tol(s21_exp(f), exp(f), 1e-6);
    ck_assert_double_eq_tol(s21_exp(d), exp(d), 1e-6);
    ck_assert_double_eq_tol(s21_exp(nul), exp(nul), 1e-6);
    ck_assert_double_eq_tol(s21_exp(ff), exp(ff), 1e-6);
    ck_assert_double_eq_tol(s21_exp(minus_f), exp(minus_f), 1e-6);
}
END_TEST

START_TEST(task_s21_exp2) {
    ck_assert_ldouble_eq_tol(s21_exp(a1), exp(a1), 1e-6);
    ck_assert_ldouble_eq_tol(s21_exp(a2), exp(a2), 1e-6);
    ck_assert_ldouble_eq_tol(s21_exp(a3), exp(a3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_exp(a4), exp(a4), 1e-6);
    ck_assert_ldouble_eq_tol(s21_exp(a5), exp(a5), 1e-6);
    ck_assert_ldouble_eq_tol(s21_exp(a6), exp(a6), 1e-6);
    ck_assert_ldouble_eq_tol(s21_exp(a7), exp(a7), 1e-6);
    ck_assert_ldouble_eq_tol(s21_exp(a8), exp(a8), 1e-6);
    ck_assert_ldouble_eq_tol(s21_exp(m1), exp(m1), 1e-6);
    ck_assert_ldouble_eq_tol(s21_exp(m2), exp(m2), 1e-6);
    ck_assert_ldouble_eq_tol(s21_exp(m3), exp(m3), 1e-6);
    ck_assert_ldouble_eq_tol(s21_exp(m4), exp(m4), 1e-6);
    ck_assert_ldouble_eq_tol(s21_exp(m5), exp(m5), 1e-6);
    ck_assert_ldouble_eq_tol(s21_exp(m6), exp(m6), 1e-6);
    ck_assert_ldouble_eq_tol(s21_exp(m7), exp(m7), 1e-6);
    ck_assert_ldouble_eq_tol(s21_exp(m8), exp(m8), 1e-6);
}
END_TEST

START_TEST(task_s21_floor) {
    ck_assert_double_eq(s21_floor(f), floor(f));
    ck_assert_double_eq(s21_floor(d), floor(d));
    ck_assert_double_eq(s21_floor(nul), floor(nul));
    ck_assert_double_eq(s21_floor(ff), floor(ff));
    ck_assert_double_eq(s21_floor(minus_f), floor(minus_f));
    ck_assert_double_eq(s21_floor(big_f), floor(big_f));
    ck_assert_double_eq(s21_floor(minus_big_f), floor(minus_big_f));
}
END_TEST

START_TEST(task_s21_atan) {
    ck_assert_double_eq_tol(s21_atan(f), atan(f), 1e-6);
    ck_assert_double_eq_tol(s21_atan(d), atan(d), 1e-6);
    ck_assert_double_eq_tol(s21_atan(nul), atan(nul), 1e-6);
    ck_assert_double_eq_tol(s21_atan(ff), atan(ff), 1e-6);
    ck_assert_double_eq_tol(s21_atan(minus_f), atan(minus_f), 1e-6);
}
END_TEST

START_TEST(task_s21_abs) {
    ck_assert_int_eq(s21_abs(123456), abs(123456));
    ck_assert_int_eq(s21_abs(-123456), abs(-123456));
    ck_assert_int_eq(s21_abs(0), abs(0));
}
END_TEST

START_TEST(task_s21_fabs) {
    ck_assert_double_eq(s21_fabs(f), fabs(f));
    ck_assert_double_eq(s21_fabs(minus_f), fabs(minus_f));
    ck_assert_double_eq(s21_fabs(nul), fabs(nul));
}
END_TEST

START_TEST(task_s21_sin) {
    ck_assert_double_eq_tol(s21_sin(w), sin(w), 1e-6);
    ck_assert_double_eq_tol(s21_sin(1), sin(1), 1e-6);
    ck_assert_double_eq_tol(s21_sin(-1), sin(-1), 1e-6);
    ck_assert_double_eq_tol(s21_sin(minus_w), sin(minus_w), 1e-6);
    ck_assert_double_eq_tol(s21_sin(minus_f), sin(minus_f), 1e-6);
    ck_assert_double_eq(s21_sin(nul), sin(nul));
}
END_TEST

START_TEST(task_s21_asin) {
    ck_assert_double_eq_tol(s21_asin(0.99), asin(0.99), 1e-6);
    ck_assert_double_eq_tol(s21_asin(w), asin(w), 1e-6);
    ck_assert_double_eq_tol(s21_asin(nul), asin(nul), 1e-6);
    ck_assert_double_eq_tol(s21_asin(minus_w), asin(minus_w), 1e-6);
    ck_assert_double_nan(s21_asin(-3.14));
    ck_assert_double_eq_tol(s21_asin(minus_f), asin(minus_f), 1e-6);
}
END_TEST

START_TEST(task_s21_cos) {
    ck_assert_double_eq_tol(s21_cos(w), cos(w), 1e-6);
    ck_assert_double_eq_tol(s21_cos(1), cos(1), 1e-6);
    ck_assert_double_eq_tol(s21_cos(3.14), cos(3.14), 1e-6);
    ck_assert_double_eq_tol(s21_cos(-3.14), cos(-3.14), 1e-6);
    ck_assert_double_eq_tol(s21_cos(minus_f), cos(minus_f), 1e-6);
    ck_assert_double_eq_tol(s21_cos(nul), cos(nul), 1e-6);
}
END_TEST

START_TEST(task_s21_fmod) {
    ck_assert_double_eq(s21_fmod(f, d), fmod(f, d));
    ck_assert_double_eq(s21_fmod(d, 2.3), fmod(d, 2.3));
    ck_assert_double_nan(s21_fmod(nul, 0));
    ck_assert_double_eq(s21_fmod(ff, d), fmod(ff, d));
    ck_assert_double_eq(s21_fmod(minus_f, d), fmod(minus_f, d));
}
END_TEST

START_TEST(task_s21_acos) {
    ck_assert_ldouble_nan(s21_acos(f));
    ck_assert_double_eq_tol(s21_acos(w), acos(w), 1e-6);
    ck_assert_double_eq_tol(s21_acos(nul), acos(nul), 1e-6);
    ck_assert_double_eq_tol(s21_acos(minus_w), acos(minus_w), 1e-6);
    ck_assert_double_eq_tol(s21_acos(ff), acos(ff), 1e-6);
    ck_assert_double_eq_tol(s21_acos(minus_f), acos(minus_f), 1e-6);
    ck_assert_double_nan(s21_acos(big_f));
    ck_assert_double_nan(s21_acos(minus_big_f));
}
END_TEST

int main() {
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, s21_log_test);
    tcase_add_test(tc1_1, s21_pow_test);
    tcase_add_test(tc1_1, s21_sqrt_test);

    tcase_add_test(tc1_1, task_s21_tan);
    tcase_add_test(tc1_1, task_s21_ceil);
    tcase_add_test(tc1_1, task_s21_exp);
    tcase_add_test(tc1_1, task_s21_exp2);
    tcase_add_test(tc1_1, task_s21_floor);
    tcase_add_test(tc1_1, task_s21_atan);

    tcase_add_test(tc1_1, task_s21_abs);
    tcase_add_test(tc1_1, task_s21_fabs);
    tcase_add_test(tc1_1, task_s21_sin);
    tcase_add_test(tc1_1, task_s21_cos);
    tcase_add_test(tc1_1, task_s21_fmod);
    tcase_add_test(tc1_1, task_s21_asin);
    tcase_add_test(tc1_1, task_s21_acos);

    srunner_run_all(sr, CK_ENV);
    srunner_free(sr);

    return 0;
}
