// <---- Code description of DYNAMIC MEMORY ALLOCATION ----> 

#include <stdio.h>

#include <stdlib.h>

int main() {
  // your code goes herer
  ///printf("Size of float datatype:%d",sizeof(float) );

  int * m;
  m = (int * ) malloc(5 * sizeof(int));
  //if you allocate memory more than the capacity of your system then malloc() return value zero or NULL.
  (m == 0) ? (printf(" over the capacity \n ")) : printf(("  under the capacity\n "));

  m[0] = 1768;
  m[1] = 4768;
  m[2] = 65;
  m[3] = 365;
  m[4] = 965;
  m[5] = 743;
  m[6] = 54;
  m[7] = 66;
  m[8] = 44;
  m[9] = 87;
  printf("\n printing an array value\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d\t", m[i]);
  }

  return 0;
}