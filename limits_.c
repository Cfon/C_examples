#include <stdio.h>
#include <limits.h>

// cmd> gcc limits_.c -o limits_ && .\limits_
// PS> gcc limits_.c -o limits_; .\limits_

int main()
{
  printf("\nCHAR_BIT=%d", CHAR_BIT);
  printf("\nSCHAR_MIN=%d\t\tSCHAR_MAX=%d", SCHAR_MIN, SCHAR_MAX);
  printf("\nUCHAR_MAX=%d", UCHAR_MAX);
  printf("\nINT_MIN=%d\tINT_MAX=%d", INT_MIN, INT_MAX);
  printf("\nLONG_MIN=%ld\tLONG_MAX=%ld\n", LONG_MIN, LONG_MAX);
  return 0;
}