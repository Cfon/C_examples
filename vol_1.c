#include <stdio.h>
#include <locale.h>
#include <windows.h>

// cmd> gcc a.c -o a && .\a

float w(float, float);

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");

  float a,b;
  int i;
  
  for (i = 0; i < 5; i++) {
    printf("\nВведите a=");
    scanf("%f", &a);
    printf("Введите b=");
    scanf("%f", &b);
    if (a > 0.0 && b > 0.0) break;
    printf("Ошибка, нужно a > 0 и b > 0\n");
  }
  
  if (i == 5) {
    printf("ОЧЕНЬ ПЛОХО вводите данные!!\n");
    return 0;
  }
  
  printf("Объем цилиндра = %f\n", w(a, b));
}

float w(float g, float h) 
{
  if (g >= h) 
    return 3.14159 * g * g * h;
  else
    return 3.14159 * h * h * g;
}
