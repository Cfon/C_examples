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
  printf("%d, %p\n", y, i); // y == 0, i == &x[0]
  
  y = *i++;  // y = *i, i++
  printf("%d, %p\n", y, i); // y == 0, i == &x[1]
  
  y = ++*i;  // y = ++(*i)
  printf("%d, %p\n", y, i); // y == 3, i == &x[1]
   
  y = *++i;  // y = *(++i) 
  printf("%d, %p\n", y, i); // y == 10, i == &x[2]
  
  y = (*i)++; // #1, #2
  printf("%d, %p\n", y, i); // y == 10, i == &x[2]
  
  y = ++(*i); // почему y == 12? см. #2
  printf("%d, %p\n", y, i); // y == 12, i == &x[2]
  
  // #1
  // int a = 10, y;
  // y = a++;
  // printf("%d, %d\n", a, y);
  
  // #2
  // y = (*i)++; // изменение значения в самом массиве x
  // printf("%d, %p, %d\n", y, i, x[2]); // y == 10, i == &x[2], x[2] == 11
  
}
