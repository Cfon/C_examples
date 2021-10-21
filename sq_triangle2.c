#include <stdio.h>
#include <locale.h>
#include <windows.h>

// cmd> gcc a.c -o a && .\a

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");

  const double EPSILON = 0.00001;
  double r,q,z;  
  float a,b,c,p,s;
   
  printf("\nСторона a=");
  scanf("%f", &a);
  printf("Сторона b=");
  scanf("%f", &b);
  printf("Сторона c=");
  scanf("%f", &c);
  
  if (a+b <= c || b+c <= a || a+c <= b) 
  {
    printf("По заданным данным треугольник построить нельзя!\n");
    return 0;
  }
  
  /* Определение площади треугольника (метод Герона) */  
  p = (a + b + c) / 2;  // Полупериметр
  r = p * (p-a) * (p-b) * (p-c); // Подкоренное выражение
  
  if (r < 0.0)
  {
    printf("Отрицательное подкоренное выражение");
    return 0;
  }  
  
  // Вычисление квадратного корня (метод Ньютона)
  s = r;  
  for (;;) 
  {    
    q = s;
    s = (q + r/q) / 2; 
    z = (s - q) / s;
    z = z < 0 ? -z : z;  // ??? а надо ли может ли быть площадь отрицательной?
    if (z < EPSILON) 
      break;
  }   
  
  printf("Площадь треугольника: %f\n", s);
  
  return 0;
}
