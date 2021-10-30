#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");   
  
  /* Напечатать последнее слово в предложении */ 
  printf("\nНапишите предложение: ");    
  char s[80], c, m = ' ';  
  int i = 0; 
  
  while ((c = getchar()) != '\n') {
    if (c == ' ' && m == ' ') continue;
    if (m == ' ') i = 0;    
    // s[i++] = c;
    m = c;    
  }
  
  s[i] = '\0';
  printf("Последнее слово: %s\n", s); 
}
