// Program to determine whether the computer uses "logical" or "arithmetic" right shift
// A logical right shift sets the left-most bit to 0
// An arithmetic right shift sets the left-most bit to 1

#include <stdio.h>

int main(void) {

  unsigned int test = 0;

  test >>= 1;

  if (test > 0)
    printf ("Arithmetic\n");
  else if (test == 0)
    printf ("Logical\n");
  else
    printf ("Invalid\n");
  
  return 0;
}