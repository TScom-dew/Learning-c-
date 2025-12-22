/*          Using EXIT_FAILURE and EXIT_SUCCESS  */
#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *f = fopen("nothing.txt", "r");

  if (f == NULL) {
    perror("Could not open nothing.txt");
    exit(EXIT_FAILURE); // More readable than exit(1)
  }else {
      printf("Success\n");
  }

  fclose(f);
  return EXIT_SUCCESS;
}