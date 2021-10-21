#include <stdio.h>
#include <locale.h>
#include <windows.h>

// cmd> gcc a.c -o a && .\a

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");

  int i,j,n;
  float a,b,d,x[100],e;
  
  while (1) {
    printf("\nВведите значение n=");
    scanf("%d", &n);
    if (n > 0 && n <= 100) break;
    printf("Ошибка! Необходимо 0 < n <= 100\n");
  }
  
  printf("Введите значение элементов:\n");
  b = 0.0;
  for (i = 0; i < n; i++) {
    printf("x[%d]=", i);
    scanf("%f", &x[i]);
    b += x[i];
  }
  
  b /= n; // среднее 
  
  for (j = 0; j < n; j++) {
    a = x[j] - b;
    d += a * a;
  }
  
  d /= n; // дисперсия
  printf("Среднее значение = %f, дисперсия = %f\n", b, d);
  
  return 0;
}