#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stddef.h>

// gcc a.c -o a && .\a

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");   
  
  int x[] = { 0, 2, 10, 99 };
  int *i = x;
  int y;
  
  y = *i;
  printf("%d, %p\n", y, i); 
  
  y = *i++;  
  printf("%d, %p\n", y, i); 
  
  y = ++*i;  
  printf("%d, %p\n", y, i); 
   
  y = *++i;  
  printf("%d, %p\n", y, i); 
  
  y = (*i)++; 
  printf("%d, %p\n", y, i); 
  
  y = ++(*i); 
  printf("%d, %p\n", y, i); 
   
  
}
