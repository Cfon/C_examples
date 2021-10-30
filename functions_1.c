#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

void swap(float *, float *);

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");   
  float x, y;
  printf("\nВведите x: ");
  scanf("%f", &x);
  printf("\nВведите y: ");
  scanf("%f", &y);
  swap(&x, &y);
  printf("Результат x=%f, y=%f\n", x, y);
}

void swap(float *a, float *b)
{
  float c;
  c = *a;
  *a = *b;
  *b =c ;
}