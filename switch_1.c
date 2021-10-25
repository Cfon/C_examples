#include <stdio.h>
#include <locale.h>
#include <windows.h>

// cmd> gcc a.c -o a && .\a

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");

  int i;  
  while (1) {
    printf("\nВведите десятичную цифру: ");
    scanf("%d", &i);
    printf("\t\t");
    switch (i) {
    case 1:
      printf("%d - один\n", i);
      break;
    case 2:
      printf("%d - два\n", i);
      break;
    case 3:
      printf("%d - три\n", i);
      break;
    case 4:
      printf("%d - четыре\n", i);
      break;
    case 5:
      printf("%d - пять\n", i);
      break;
    case 6:
      printf("%d - шесть\n", i);
      break;
    case 7:
      printf("%d - семь\n", i);
      break;
    case 8:
      printf("%d - восемь\n", i);
      break;
    case 9:
      printf("%d - девять\n", i);
      break;
    case 0:
      printf("%d - ноль\n", i);
      break;
    default:
      printf("%d - это не цифра!\n", i);
      return 0;
    }
  }
}

