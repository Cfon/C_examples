#include <stdio.h>
#include <locale.h>
#include <windows.h>

// cmd> gcc a.c -o a && .\a

int fact(int);

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");

  int n,m,nmc,nm;
  
  for (;;) {
    printf("\nВведите n=");
    scanf("%d", &n);
    printf("\nВведите m=");
    scanf("%d", &m);
    if (m >= 0 && n >= m && n < 10) break;
    printf("Ошибка! Необходимо m >= 0, n >= m, n < 10\n");
  }
  
  /* Вычисление биноминального коэффициента C(m,n) = n!/ m!(n-m)! */
  nm = n - m;
  nmc = fact(n) / (fact(m) * fact(nm));
  printf("Биноминальный коэффицент = %d\n", nmc);
}

int fact(int k)
{
  int i,j;    
  for (i = 1, j = 1; i <= k; i++)  
    j *= i;
  return j;
}