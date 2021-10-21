#include <stdio.h>
// #include <windows.h>
#include <locale.h>

// cmd> gcc epsilon.c -o epsilon && .\epsilon
// PS> gcc epsilon.c -o epsilon; .\epsilon

int main()
{
  // SetConsoleOutputCP(CP_UTF8);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  int k;
  // float e, e1;
  double e, e1;

  e = 1.0;
  k = 0;
M:
  e = e / 2.0;
  e1 = e + 1.0;
  k++;

  if (e1 > 1.0)
    goto M;

  printf("\nЧисло делений на 2: %6d\n", k);
  printf("Машинный нуль: %e\n", e);

  return 0;
}