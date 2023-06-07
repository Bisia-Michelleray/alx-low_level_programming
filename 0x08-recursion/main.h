#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int square_root(int n, int m);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int prime(int i, int num);
int is_palindrome(char *s);
int check_string(char *str, int len);
int check_palindrome(char *s);
int wildcmp(char *s1, char *s2);

#endif
