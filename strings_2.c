#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

int main()
{ 
  // SetConsoleOutputCP(CP_UTF8);
  setlocale(LC_ALL, "russian"); 
  
  /* Подсчет числа отличных от пробела символов */
  printf("\nНапишите предложение с точкой в конце:\n");    
  int k = 0;
  char z;
  while ((z = getchar()) != '.') {
    if (z != ' ') k++;
  }
  printf("Количество символов = %d\n", k);
}

