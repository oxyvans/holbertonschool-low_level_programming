#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * print_number - Entry point
 * 
 * Return: 0
 */


static int potencia(int a, int b){
  int c = 1;
  while (c <= b){
    a = a * a;
    c++;
  }
  return (a);
}


void print_number(int n)
{
  int number = n;
  int n_digit = 0;
  int k;
  int cifra;
  int p;
  while (number > 0){
    n_digit++;
    number = (number / 10);
  }
   for (k = (n_digit-1); k >= 0; k--){
    p = potencia(10,k);
    cifra = ((n / p) % 10);
    _putchar(cifra + '0'); 
  }
   _putchar((n % 10) + '0');
}
