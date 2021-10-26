#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

#define N 6

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian"); 
  
  float array[] = { 5.0, 2.0, 3.0, 1.0, 6.0, 4.0 };
  float *pmin[N];
  float *pmax[N];
  
  for (int i = 0; i < N; i++) {
    pmin[i] = pmax[i] = &array[i];
  }
  
  for (int i = 0; i < N-1; i++) {
    for (int k = i+1; k < N; k++) {
      if (*pmin[i] < *pmin[k]) {
        float *p = pmin[i];
        pmin[i] = pmin[k];
        pmin[k] = p;
      }  
      if (*pmax[i] > *pmax[k]) {
        float *p = pmax[i];
        pmax[i] = pmax[k];
        pmax[k] = p;
      }
    }
  }
  
  printf("\nСортировка по убыванию:\n");
  for (int i = 0; i < N; i++) {
    printf("\t%.2f", *pmin[i]);
  }
  
  printf("\nСортировка по возрастанию:\n");
  for (int i = 0; i < N; i++) {
    printf("\t%.2f", *pmax[i]);
  }
  
  printf("\n");
}

