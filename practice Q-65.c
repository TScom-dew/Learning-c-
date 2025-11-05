//  program to store 5 prices to allocate dynamic memory 


#include <stdio.h>

int main() {
	// your code goes herer
	 int *ptr;
	 ptr=(int*)malloc(50*sizeof(int));
	 
	 ptr[0]= 33434;
	 ptr[1]=3456;
	 ptr[2]=9889;
	 ptr[3]=77809;
	 ptr[4]=5667;
	 printf("\n printing value of 5 prices\n"); 
	 for(int i=0;i<5;i++)
	 {
	   printf("price %d.  %d\n",i+1,ptr[i]);
	   
	 }
	 printf("\nsize of memory allocate:%d",50*sizeof(ptr[0]));
	 
	 return 0 ;
}

