#include <stdio.h>
#include <string.h>
typedef struct student
{
        int roll_no;
        float cgpa;
        char name[100];
}st;

  void function(struct student p) ;
 int main() {
	// your code goes herer
	st p;
	p.roll_no=111;
	p.cgpa=222;
	strcpy(p.name ,"aslok");
	function(p);
	return 0;
	
}
       void function(struct student p)
       {
               printf(" Roll no. :%d\n", p.roll_no);
               printf("CGPA :%.2f\n", p.cgpa);
               printf("Name of the student:%s\n",p.name);
       }







