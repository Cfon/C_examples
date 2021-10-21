#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <wchar.h>

int main(void)
{
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");  
    
  int i;
  double eps, b, r, x;
  
  printf("\nВведите значение показателя экспоненты x = ");
  scanf("%lf", &x);    
  r = x;
  eps = 0.0;  
  
  while (eps <= 0.0) {
    printf("Введите точность eps = ");
    scanf("%lf", &eps);      
  }
    
  b = 1.0; 
  i = 2;            // trace table 
  while (r > eps) { // 1.0 > 0.01 | 0.5 > 0.01         | 0.16 > 0.01       | 0.04 > 0.01        | 0.008 > 0.01
    b += r;         // 2.0        | 2.5                | 2.66              | 2.7                | 
    r *= x / i;     // 0.5        | 0.5 * 1/3 = 0.16   | 0.16 * 1/4 = 0.04 | 0.04 * 1/5 = 0.008
    i++;            // 3          | 4                  | 5                 | 6
  }
  
  printf("Результат: %f\n", b);
  printf("Погрешность: %f\n", r);
  printf("Число членов ряда: %d\n", i);
}