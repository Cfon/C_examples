#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");      
  
  /* Проверка вводимых числовых данных */  
  printf("\nВведите число: ");  
  char s[80];
  char ch;
  int i=0;
  while (1) {
    scanf("%c", &ch);
    if (ch == '\n') break; 
    if (!isdigit(ch)) {
      printf("Ошибка ввода\n");
      return 0;
    } 
       
    s[i++] = ch;    
  }
  
  s[i] = '\0';  
  printf("Ваше число: %s\n", s);
}
