#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

int len(char *);

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");   
  
  char s[] = "Привет мир!";  
  printf("Длина строки: %d\n", len(s));
}

int len(char *s)
{
  int i = 0;  
  while (s[i] != '\0') 
    i++;
  return i;
}