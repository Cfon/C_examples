#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// cmd> gcc a.c -o a && .\a

int main()
{
  // setlocale(LC_ALL, "russian");

  int array1[] = { 7, 3, 8, 2, 1, 9, 5, 4 };
  int i, j, size, temp;

  size = sizeof(array1)/sizeof(int);

  // исходный массив
  for (i = 0; i < size; i++) {
    printf("%d ", array1[i]);
  }

  // сортировка по возрастанию
  for (i = 0; i < size-1; i++) {
    for (j = i+1; j < size; j++) {
      if (array1[i] > array1[j]) {
        temp = array1[i];
        array1[i] = array1[j];
        array1[j] = temp;
      }
    }
  }
  // or
  for (i = 0; i < size-1; i++) {
    for (j = size-1; j > i; j--) {
      if (array1[i] > array1[j]) {
        temp = array1[i];
        array1[i] = array1[j];
        array1[j] = temp;
      }
    }
  }

  printf("\n");
  // отсортированный массив
  for (i = 0; i < size; i++) {
    printf("%d ", array1[i]);
  }

  printf("\n");
}
