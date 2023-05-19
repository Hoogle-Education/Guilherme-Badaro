#include <stdio.h>

int a = 5, b = 6;

double soma(double a, double b)
{
  return a + b;
}

int main()
{
  // resultado = soma(5, 6)
  // print(f'soma = {resultado:.2f}')
  printf("soma = %.2lf\n", soma(a, b));
  return 0;
}