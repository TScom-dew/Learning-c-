// memory is allocated using calloc() function
#include <stdio.h>
#include <stdlib.h>

int main() {
	// your code goes herer
	 int *ptr;
	 ptr=(int*)calloc(20,sizeof(int));
	 
	 //chacking allocation of memory
	 (ptr==0)?(printf("allocation is fail\n")):(printf("allocation is successful\n"));
	 
	 ptr[0]= 33434;
	 ptr[1]=3456;
	 ptr[2]=9889;
	 ptr[3]=77809;
	 ptr[4]=5667;
	 printf("\n printing the stored value of 5 prices\n"); 
	 for(int i=0;i<5;i++)
	 {
	   printf("price %d.  %d\n",i+1,ptr[i]);
	   
	 }
	// printf("\nsize of memory allocate:%d",2*sizeof(ptr[0]));
	 
	 return 0 ;
}

