#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian"); 
  
  int n;
  printf("\nn = ");
  scanf("%d", &n);
  
  /* Динамическое выделение памяти */
  float *x = malloc(n * sizeof(float));
  
  for (int i = 0; i < n; i++) {
    printf("x[%d]=", i);
    scanf("%f", &x[i]);
  }
  for (int i = n-1; i >= 0; i--) {
    printf("\tx[%d]=%.2f\n", i, x[i]);
  }
  
  /* Удаление выделенной памяти */
  free(x);
  printf("\n");
}

