#include <stdio.h>
#include <locale.h>
#include <windows.h>

// cmd> gcc a.c -o a && .\a

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");

  int n,i,k;
  double a[100],b;
  
  while (1) {
    printf("\nВведите количество элементов n=");
    scanf("%d", &n);
    if (n > 1 && n <= 100) break;
    printf("Ошибка! Необходимо число от 2 до 100 (1 < n <= 100)!\n");
  }
  
  printf("Введите значения элементов "
  "массива:\n");
  
  for (i = 0; i < n; i++) {
    printf("a[%d]=", i);
    scanf("%lf", &a[i]);    
  }
  
  // sort
  for (i = 0; i < n-1; i++) {
    for (k = i+1; k < n; k++) {
      if (a[i] > a[k]) {
        b = a[i];
        a[i] = a[k];
        a[k] = b;
      }
    }
  }
  
  printf("Упорядоченный массив:\n");  
  for (i = 0; i < n; i++) {
    printf("a[%d]=%f\n", i, a[i]);
  }
  
  return 0;
}