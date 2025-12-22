#include <stdio.h>

typedef float Temperature;
typedef int my;

int main() {
  Temperature today = 25.5;
  Temperature tomorrow = 18.6;
  my rollno = 35;
  my  id= 1004422;

  printf("Today: %.1f C\n", today);
  printf("Tomorrow: %.1f C\n", tomorrow);
  printf("Roll number=%d\n",rollno);
  printf("My Id=%d\n",id);
  return 0;
}