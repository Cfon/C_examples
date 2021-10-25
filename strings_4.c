#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

int main()
{ 
  // SetConsoleOutputCP(CP_UTF8);
  setlocale(LC_ALL, "russian"); 
  
  /* Печать латинского алфавита */  
  for (char z = 'A'; z <= 'Z'; z++) {     
    printf("%c", z);    
  }
  printf("\n");
}

