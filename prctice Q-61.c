#include <stdio.h>

int main() {
  // your code goes herer
  FILE * ptr;
  ptr = fopen("integer.txt", "w");

  int n;
  printf("Enter n:\n");
  scanf("%d", & n);
  for (int i = 1; i <= n; i++)
  {
    fprintf(ptr, "%d\t", i);

  }
  fclose(ptr);
  //Again file is opening for reading text
  printf("printing value from file\n");
  FILE * trp;
  trp = fopen("integer.txt", "r");
   
  int p;
  fscanf(trp, "%d", &p);
    printf("value.1:%d\t", p);
    
    fscanf(trp, "%d", &p);
    printf("value.2:%d\t", p);
    fscanf(trp, "%d", &p);
    printf("value.3:%d\t", p);
    fscanf(trp, "%d", &p);
    printf("value.4:%d\t", p);

  fclose(trp);
  return 0;
}