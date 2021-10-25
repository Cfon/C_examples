#include <stdio.h>
#include <locale.h>
#include <windows.h>

// cmd> gcc a.c -o a && .\a

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");

  int A, B, X;
  
  A = 10;
  
  #define A X  
  
  A = 5;
  printf("\n%d\n", A);
  
  #undef A
  
  B = A;
  
  printf("%d\n", B);
}

