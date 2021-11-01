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
  
  /* Сортировка строк */
  
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
  
  printf("\nДо сортировки:\n");
  for (int i = 0; i < n; i++) {
    printf("pc[%d] = %p -> %s\n", i, pc[i], pc[i]);
  }    
   
  
  // СОРТИРОВКА
  qsort(pc, n, sizeof(pc[0]), compare);
  
  printf("\nПосле сортировки:\n");
  for (int i = 0; i < n; i++) {
    printf("pc[%d] = %p -> %s\n", i, pc[i], pc[i]);
  }
}

int compare(const void *a, const void *b)
{  
  unsigned *pa = (unsigned *)a;
  unsigned *pb = (unsigned *)b;  
  return strcmp((char *)*pa, (char *)*pb); 
}