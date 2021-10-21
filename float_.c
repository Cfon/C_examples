#include <stdio.h>
#include <float.h>

// cmd> gcc float_.c -o float_ && .\float_
// PS> gcc float_.c -o float_; .\float_

int main()
{
  printf("\nFLT_EPSILON = %e", FLT_EPSILON);
  printf("\nDBL_EPSILON = %e", DBL_EPSILON);
  printf("\nFLT_MIN = %e\t\tFLT_MAX = %e", FLT_MIN, FLT_MAX);
  printf("\n\t\t\t\tDBL_MAX = %e", DBL_MAX);
  printf("\nFLT_MANT_DIG = %d", FLT_MANT_DIG);
  printf("\nDBL_MANT_DIG = %d\n", DBL_MANT_DIG);

  return 0;
}