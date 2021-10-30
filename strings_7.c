#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");   
  
  /* Подсчет числа отличных от пробелов символов */    
  printf("\nНапишите предложение: ");  
  char c;
  int k = 0;
  
  while ((c = getchar()) != '\n') {
    if (c != ' ') k++;
  }
  
  printf("Количество символов: %d\n", k);
}
