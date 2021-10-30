#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");   
  
  char z[5];
  int m[5];
  float a[5];

  printf("\nАдреса элементов символьного массива:\n");
  for (char *uz = z; uz <= &z[4]; uz++) {
    printf(" %10p", uz);
  }
  printf("\nЧисло элементов в массиве: %d\n", &z[4] - &z[0]);
  
  printf("\nАдреса элементов целочисленного массива:\n");
  for (int *um = m; um <= &m[4]; um++) {
    printf(" %10p", um);
  }
  printf("\nЧисло элементов в массиве: %d\n", &m[4] - &m[0]);
  
  printf("\nАдреса элементов вещественного массива:\n");
  for (float *ua = a; ua <= &a[4]; ua++) {
    printf(" %10p", ua);
  }
  printf("\nЧисло элементов в массиве: %d\n", &a[4] - &a[0]);
  
  printf("\n");  
}
