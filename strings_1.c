#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

int main()
{ 
  // SetConsoleOutputCP(CP_UTF8);
  setlocale(LC_ALL, "russian"); 
  
  printf("\nНапишите предложение с точкой в конце:\n"); 

  /* Удаление повторяющихся пробелов */
  char z = ' ', s = ' ';
  while (z != '.') {
    scanf("%c", &z);
    if (z == ' ' && s == ' ') continue;
    printf("%c", z);
    s = z;
  }
  
  printf("\n");
}

