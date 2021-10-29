#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stddef.h>

// gcc a.c -o a && .\a

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian"); 
  
  int x[5];  
  int *i = &x[0];
  int *k = &x[4];
  ptrdiff_t j = k - i;
  printf("%p, %p, %d\n", i,k,j);

}

