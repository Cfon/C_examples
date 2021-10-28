#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");      
  
  /* Проверка вводимых числовых данных */
  
  char s[] = "0123456789 ";  
  printf("\nВведите строку символов: ");    
  
  char ch;
  int i=1, j;
  while ((ch = getchar()) != '\n') {        
    for (j = 0; j < 11; j++) 
      if (ch == s[j]) break;      
    
    if (j == 11) 
      printf("Ошибка в символе %c с номером %d\n", ch, i); 
    
    i++;
  }
    
  printf("\n");
}

