/*
** EPITECH PROJECT, 2022
** printf.h
** File description:
** prototype
*/

#pragma once

#include <stdarg.h>

int sum_numbers(int n, ...);
int sum_strings_length(int n, ...);
void disp_stdarg(char *s, ...);
int percent_s(va_list ap);
int percent_i(va_list ap);
int percent_c(va_list ap);
int percent_d(va_list ap);
int percent_u(va_list ap);
int percent_g(va_list ap);
int percent_o(va_list ap);
int percent_b(va_list ap);
int percent_x(va_list ap);
int percent_x2(va_list ap);
int percent_o(va_list ap);
int percent_p(va_list ap);
int percent_f(va_list ap);
int percent_smaj(va_list ap);
int percent_s2(int number);
int modifiers(va_list ap, char const *s, int *number);
int end_modifiers(va_list ap, char const *s, int *number);
int first_string(va_list ap, const char *s, int *number);
int second_string(va_list ap, const char *s, int *number);
int error_string(va_list ap, const char *s, int *number);
int my_eprintf(const char *format, ...);
int err_loop_conditions(const char *format, int *number, va_list ap);
int err_percent_d(va_list ap);
int err_percent_f(va_list ap);
int err_percent_c(va_list ap);
int err_percent_s(va_list ap);
