#include <stdio.h>
#include <locale.h>
#include <windows.h>

// cmd> gcc a.c -o a && .\a

#define MAX_INDEX 5

float scalar_product(int, float[], float[]);

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");

  int n,i;
  float x[MAX_INDEX], y[MAX_INDEX];    
  
  printf("\nРазмерность векторов n=");
  scanf("%d", &n);
  
  if (n < 1 || n > MAX_INDEX) {
    printf("Ошибка в данных!\n");
    return 0;
  }
  
  printf("Введите %d координаты x: ", n);
  for (i = 0; i < n; i++) {
    scanf("%f", &x[i]);
  }
  
  printf("Введите %d координаты y: ", n);
  for (i = 0; i < n; i++) {
    scanf("%f", &y[i]);
  }
  
  printf("Результат: %7.3f\n", scalar_product(n, x, y));
    
  
  return 0;
}

float scalar_product(int n, float a[], float b[])
{ 
  double z=0.0;
  int i;
  for (i = 0; i < n; i++) {
    z += a[i] * b[i];
  }
  return z;
}