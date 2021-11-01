#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

// gcc a.c -o a && .\a

int compare(const void *, const void *);

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");   
  
  /* Копирование массива строк */
  
  char *pc[] = {
    "one - 1",
    "two - 2",
    "three - 3",
    "four - 4",
    "five - 5",
    "six - 6",
    "seven - 7",
    "eight - 8",
    "nine - 9",
    "ten - 10"
  };
  
  int n = sizeof(pc)/sizeof(pc[0]);
  
  printf("\nИсходный массив:\n");
  for (int i = 0; i < n; i++) {
    printf("pc[%d] = %p -> %s\n", i, pc[i], pc[i]);
  }
   
  /* char pc2[10][80];    
  for (int i = 0; i < n; i++) {
    strcpy(pc2[i], pc[i]);
  } */
  
  // МАССИВ СТРОК 
  char *pc2[10];
  for (int i = 0; i < n; i++) {
    char *s = malloc(strlen(pc[i]) + 1);
    strcpy(s, pc[i]);
    pc2[i] = s;
  }
  
  printf("\nНовый массив:\n");
  for (int i = 0; i < n; i++) {
    printf("pc2[%d] = %p -> %s\n", i, pc2[i], pc2[i]);
  }
  
  // free
  for (int i = 0; i < n; i++) {
    free(pc2[i]);
  }    
}
