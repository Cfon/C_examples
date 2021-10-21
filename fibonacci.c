#include <stdio.h>
#include <locale.h>
#include <windows.h>

// cmd> gcc fibonacci.c -o fibonacci && .\fibonacci
// PS> gcc fibonacci.c -o fibonacci; .\fibonacci

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");

  int k, i;
  float s, p, r, f;
  
M1:
  printf("\nВведите число членов ряда k = ");
  scanf("%d", &k);
  
  if (k > 2) 
    goto M2;
  
  printf("\nОшибка! k должно быть > 2!");
  goto M1;
  
M2:
  printf("\nПервый член ряда p = ");
  scanf("%f", &p);
  printf("\nВторой член ряда r = ");
  scanf("%f", &r);
  
  i = 3;
  s = p + r; // 4 + 5
M3:
  f = p + r; // 4 + 5
  s = s + f; // 9 + 9 
  p = r; // 5
  r = f; // 9
  i++;
  
  if (i <= k) 
    goto M3;
  
  printf("\nСумма членов ряда: %10.3f\n", s);

  return 0;
}