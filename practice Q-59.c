// this code represents basically how to store marks of 30 student

#include <stdio.h>

int main() {
  // your code goes herer
  int marks[10];
  marks[0] =325 ;
  marks[1] = 365;
  marks[2] = 376;
  marks[3] = 443;
  marks[4] = 323;
  marks[5] = 354;
  marks[6] = 455;
  marks[7] = 423;
  marks[8] = 398;
  marks[9] = 321;
  for(int i=0;i<10 ;i++)
  {
    printf(" marks of student- %d. %d\n", i+1,marks[i] );  

  }
  return 0;
}