#include <stdio.h>
#include <locale.h>
#include <windows.h>

// cmd> gcc a.c -o a && .\a

float sqr(float);
float abs_(float);

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");

  float a,b,c,p,s;
  
  printf("\nСторона a=");
  scanf("%f", &a);
  printf("Сторона b=");
  scanf("%f", &b);
  printf("Сторона c=");
  scanf("%f", &c);
  
  if (a+b <= c || b+c <= a || a+c <= b) 
  {
    printf("Треугольник построить нельзя!\n");
    return 0;
  }
  
  p = (a + b + c) / 2;
  s = sqr(p * (p-a) * (p-b) * (p-c));
  printf("Площадь треугольника: %f\n", s);
  
  return 0;
}

float sqr(float x)
{    
  const double REL = 0.00001;
  double r,q;  
  
  if (x < 0.0)
  {
    printf("Отрицательное подкоренное \
выражение");
    exit(1);
  }
  
  if (x == 0.0) return x;
  
  r = x;
  do {
    q = r;
    r = (q + x/q) / 2;
  } while (abs_((r-q)/r) > REL);
  
  return r;
}

float abs_(float z)
{
  if (z > 0) return z;
  else return (-z);
}
