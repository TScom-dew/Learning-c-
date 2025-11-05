#include <stdio.h>
#include <string.h>
struct adderess
{
  int houseno;
  int blockno;
  char city[20];
  char state[20];
};
void printfunction(struct adderess p[] ,int a);
int main() {
	// your code goes herer
	
	struct adderess p[5];
	p[0].houseno=1;;
	p[0].blockno=10;
	strcpy(p[0].city,"chatra");
	strcpy(p[0].state,"Jharkhand");
	
	p[1].houseno=2;;
	p[1].blockno=11;
	strcpy(p[1].city,"hazaribagh");
	strcpy(p[1].state,"Jharkhand");
	
	p[2].houseno=3;;
	p[2].blockno=12;
	strcpy(p[2].city,"Ramgar");
	strcpy(p[2].state,"Jharkhand");
	
	p[3].houseno=4;;
	p[3].blockno=14;
	strcpy(p[3].city,"Latehar");
	strcpy(p[3].state,"Jharkhand");
	p[4].houseno=5;
	p[4].blockno=15;
	strcpy(p[4].city,"simdega");
	strcpy(p[4].state,"Jharkhand");

  // printf("House No.: %d",s[0].housse_no);
	
	printfunction(p ,0);
	printfunction(p ,1);
	printfunction(p ,2);
	printfunction(p ,3);
	printfunction(p ,4);
	return 0 ;
}

   void printfunction(struct adderess p[] ,int a)
   {
      printf("House No.:%d\t" ,p[a].houseno);
      printf("Block No.:%d\t", p[a].blockno);
      printf("City Name :%s\t",p[a].city);
      printf("state Name:%s\t" ,p[a].state);
      printf("\n");
   }




