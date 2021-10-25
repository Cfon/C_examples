#include <stdio.h>
#include <locale.h>
#include <windows.h>

// cmd> gcc a.c -o a && .\a

#define N 4
#define M 5
#define A(i,j) x[M*(i)+(j)]

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");
  
  double x[N*M];
  int i,j,k;
  
  for (k = 0; k < N*M; k++) {
    x[k] = k;
  }
  
  for (i = 0; i < N; i++) {
    printf("\nСтрока %d:", i);
    for (j = 0; j < M; j++) {
      printf("%6.1f", x[M*i+j]);
      // printf("%6.1f", A(i,j));
    }
  }
  printf("\n");
  
  // double y[2][2] = {{1,2}, {2,3}};
  // for (i = 0; i < 2; i++) {
    // for (j = 0; j < 2; j++) {
      // printf("%3.1f ", y[i][j]);
    // }
    // printf("\n");
  // }
  // printf("\n");      
}

