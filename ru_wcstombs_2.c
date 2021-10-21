#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// cmd> gcc a.c -o a && .\a

int main()
{ 
  setlocale(LC_ALL, "russian");

  char *str = "Привет мир!";
  size_t len = strlen(str) * sizeof(str[0]);  //  
  char *mbstr = (char *) malloc(len + 1);
  
  // convert wchar_t string to utf8 string
  // int ret = wcstombs(mbstr, wcstr, len + 1); 

  // printf("Characters converted = %d\n", ret);
  printf("Byte character = %s\n", str);
  printf("Символы: %d\n", strlen(str));
  printf("%c\n", str[0]); 
  
  free(mbstr);
}
