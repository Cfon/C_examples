#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// cmd> gcc a.c -o a && .\a

int main()
{ 
  setlocale(LC_ALL, "russian");

  char *str = "Привет мир!";
  size_t len = strlen(str);     
  
  printf("\nByte string = %s\n", str);
  printf("Символов: %d\n", len);
  printf("Первый символ: %c\n\n", str[0]);   
}
