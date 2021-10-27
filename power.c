#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdint.h>

// gcc a.c -o a && .\a

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");      
  
  
  char s[80];
  int x, y;
  uint64_t z = 1;
  
  while (1) {       
    printf("\nВведите число x: ");
    scanf("%d", &x);
    printf("Введите степень y: ");
    scanf("%d", &y);
        
    for (int i = y; i > 0; i--) {
      z *= x;
    }

    printf("\nСтепень числа %d^%d = %lli\n", x, y, z);    
    printf("Продолжить? [y/n]: ");
    scanf("%s", &s);
    if (*s == 'n' || *s == 'N') break;   
  }   
 
  printf("\n");
  
  
}

