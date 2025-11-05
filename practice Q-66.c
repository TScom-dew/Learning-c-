//  <----memory allocation----->

#include <stdio.h>
#include <stdlib.h>

int main() {
	// your code goes herer
	int *ptr;
	int n;
	printf("Enter the size of memory:\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	//chacking the allocation of memory 
	(ptr!=0)?(printf("allcation is success\n")):(printf("allocation is fail\n"));
	
	  
	  for(int i=1; i<=n; i++)
	  {
	    scanf("%d", &ptr[i]);
	  }
	  
	  printf("\n printing the stored value \n");
	  for(int i=1; i<=n; i++)
	  {
	    printf(" %d.value:%d\n",i,ptr[i]);
	  }   
	
	
	return 0;
}

