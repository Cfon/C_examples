#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");   
  
  float x[] = { 10.0, 20.0, 30.0, 40.0, 50.0 };
  float *u1, *u2;
  
  printf("\nАдреса указателей: &u1=%p &u2=%p\n", &u1, &u2);  
  printf("Адреса элементов массива:\n");  
  for (int i = 0; i < 5; i++) {    
    printf(" &x[%d]=%p\n", i, &x[i]);
  }    
  printf("Значения элементов массива:\n");  
  for (int i = 0; i < 5; i++) {    
    printf(" x[%d]=%5.1f\n", i, x[i]);
  }    
  
  for (u1=&x[0], u2=&x[4]; u1 <= &x[4]; u1++, u2--) {
    printf(" u1=%p *u1=%5.1f - u2=%p *u2=%5.1f\n", u1, *u1, u2, *u2);
    printf(" u2 - u1 = %d\n", u2 - u1);
  }
}
