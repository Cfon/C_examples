#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

int main()
{ 
  // SetConsoleOutputCP(CP_UTF8);
  setlocale(LC_ALL, "russian"); 
  
  /* ������� ����� �������� �� ������� �������� */
  printf("\n�������� ����������� � ������ � �����:\n");    
  int k = 0;
  char z;
  while ((z = getchar()) != '.') {
    if (z != ' ') k++;
  }
  printf("���������� �������� = %d\n", k);
}

