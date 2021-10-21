#include <stdio.h>
#include <locale.h>
#include <windows.h>

// cmd> gcc a.c -o a && .\a

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");

  double g, c, p;
  int i, n;
  
  printf("\nВведите значение g = ");
  scanf("%lf", &g);
  
  for (;;) {
    printf("Введите значение n = ");
    scanf("%d", &n);
    if (n > 0) break;
    printf("Ошибка! n должно быть > 0!\n");
  }
  
  // c = g^1 + g^2 + ... + g^n
  c = 0.0;
  p = 1.0;
  for (i = 1; i <= n; i++) { // n = 3, g = 8.8
    p *= g;                  // p = 8.8  | 77.44 | 679.712
    c += p;                  // c = 8.8  | 86.24 | 765.952
  }
  
  printf("Сумма c = %e\n", c);

  return 0;
}