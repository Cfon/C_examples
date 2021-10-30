#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

#include "functions.c"

void invert(char *s);

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");   
  
  char s[] = "0123456789";  
  printf("\nИсходная строка %s\n", s);
  invert(s);
  printf("Инвертированная строка %s\n", s);
}

void invert(char *s)
{
  int i = 0, j = len(s)-1;
  char c;
  
  while (i < j) 
    swap(&s[i++], &s[j--]);     
}
