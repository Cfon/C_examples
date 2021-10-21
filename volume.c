#include <stdio.h>
#include <locale.h>
#include <windows.h>

// cmd> gcc volume.c -o volume && .\volume
// PS> gcc volume.c -o volume; .\volume

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");

  double h,r,v;
  const float PI = 3.14159;

  printf("\nРадиус цилиндра r = ");
  scanf("%lf", &r);
  printf("Высота цилиндра h = ");
  scanf("%lf", &h);
  v = h * PI * r * r;
  printf("Объем цилиндра v = %6.4f\n", v);

  return 0;
}