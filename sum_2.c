#include <stdio.h>
#include <locale.h>
#include <windows.h>

// cmd> gcc a.c -o a && .\a

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");

  double s=0.0, x=1.0;
  int k=0;
  
  //> 6 -3.0 14.0 -5 -4 10 0
  printf("\nВведите последовательность чисел с 0 в конце: "); 
  
  while (x != 0.0) {
    scanf("%lf", &x);
    if (x <= 0.0) continue;
    s += x;
    k++;
  }

  printf("Сумма = %.2lf, количество положительных чисел = %d\n", s, k);  

  return 0;
}