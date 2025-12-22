#include <stdio.h>

int main() {
	// your code goes herer
	  int *ptr;
	  ptr=(int*)calloc(5,sizeof(int));
	  
	  for(int i=0; i<5; i++)// storing the value in the memory
	  {
	    printf("enter the value:\n");
	     scanf("%d",&ptr[i]);
	  }
	  printf("\nreallocating the size of the memory\n");//reallocating the size of the memory
	  ptr=realloc(ptr,8);
	  for(int i=5; i<8; i++)
	  {
	    printf("enter the value:\n");
	     scanf("%d",&ptr[i]);
	  }
	   
	  printf("printing the stored  value\n");
	  for(int i=0 ;i<8; i++)//printing the stored  value
	  {
	    printf("%d.value :%d\n",i+1,ptr[i]);
	  }
	   
	   
	  //  <--- now reallocting the memmory --->
	  /*
	    ptr=realloc(ptr,35);
	   ptr=6;
	   printf("6.value :%d\n",ptr);
	   ptr=7;
	   printf("7.value :%d\n",ptr);
	  */
	  free(ptr);// now the memory is gone free
	  return 0;
}

