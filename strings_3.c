#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

int main()
{ 
  // SetConsoleOutputCP(CP_UTF8);
  setlocale(LC_ALL, "russian"); 
  
  /* Печать десятичных цифр */  
  for (char z = '0'; z <= '9'; z++) {
    if (z == '0' || z == '5') 
      printf("\n%c-%x", z, z);   
    printf("%4c-%x", z, z);    
  }
  printf("\n");
}

