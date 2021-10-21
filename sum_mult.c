#include <stdio.h>
#include <locale.h>
#include <windows.h>

// cmd> gcc a.c -o a && .\a

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  // setlocale(LC_ALL, "russian");

  double a[10][5] = {
    {1,2,3,4,5},
    {6,7,8,9,10},
    {1,2,3,4,5},
    {1,2,3,4,5},
    {1,2,3,4,5},
    {1,2,3,4,5},
    {1,2,3,4,5},
    {1,2,3,4,5},
    {1,2,3,4,5},
    {1,2,3,4,5}
  };
  
  double s,p,c;
  
  s = 0.0;
  for (int i = 0; i < 10; i++) {
    p = 1.0;
    c = 0.0;
    for (int j = 0; j < 5; j++) {
      p *= a[i][j];
      c += a[i][j];      
    }
    s += p + c;    
  }
  
  printf("s=%lf\n", s);  
  
  return 0;
}