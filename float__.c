#include <stdio.h>

// cmd> gcc float__.c -o volume && .\volume
// PS> gcc volume.c -o volume; .\volume

int main()
{
  // float a,b,c,t1,t2,t3;
  double a,b,c,t1,t2,t3;

  a = 100.0;
  b = 0.02;
  t1 = (a + b) * (a + b);
  t2 = -2.0 * a * b - a * a;
  t3 = b * b;
  c = (t1 + t2) / t3;

  printf("\nc = %f\n", c);

  return 0;
}