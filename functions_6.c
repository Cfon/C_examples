#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>

// gcc a.c -o a && .\a

typedef double (* pf_t)(double);

double rectangle(pf_t, double, double);
double ratio(double);
double cos4_2(double);

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");   
  
  /* Расчет интегралов */ 
  double a = rectangle(ratio, -1.0, 2.0);
  double b = rectangle(cos4_2, 0.0, 0.5);
  printf("\nПервый интеграл: %f\n", a);
  printf("Второй интеграл: %f\n", b);
}

double rectangle(pf_t pf, double a, double b)
{
  int n = 20;
  double s = 0.0;
  double h = (b - a)/n;  
  for (int i = 0; i < n; i++) {
    s += pf(a + h/2 + i*h);
  }  
  return h * s;
}

double ratio(double x)
{
  double z = x * x + 1;
  return x/(z * z);
}

double cos4_2(double x)
{
  double y = cos(x);
  return 4 * y * y;
}