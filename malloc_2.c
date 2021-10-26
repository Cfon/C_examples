#include <stdio.h>
#include <locale.h>
#include <windows.h>

// gcc a.c -o a && .\a

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");      
  
  /* Двумерный массив переменной длины */
  int n;
  printf("\nВведите количество строк массива n=");
  scanf("%d", &n);     
  double **array = malloc(n * sizeof(double *)); 
  // вспомогательный массив размерностей
  int *m = malloc(n * sizeof(int));  
  
  for (int i = 0; i < n; i++) {
    printf("Введите число элементов в массиве %d: ", i);
    scanf("%d", &m[i]);  
    
    // Выделение памяти для вложенных массивов
    array[i] = malloc(m[i] * sizeof(double));
    
    for (int k = 0; k < m[i]; k++) {
      printf("Введите значения массива [%d][%d]=", i, k);
      scanf("%le", &array[i][k]);  
    }
  }
  
  printf("Результаты обработки в обратном порядке: ");  
  for (int i = n-1; i >= 0; i--) {
    printf("\nСтрока %d, число элементов %d\n", i, m[i]);
    for (int k = 0; k < m[i]; k++) {
      printf("\t%.2f", array[i][k]);
    }    
  }
    
  // Освобождение памяти 
  for (int i = 0; i < n; i++) {    
    free(array[i]);
  }
  
  free(array);
  free(m);
  
  printf("\n");
}

