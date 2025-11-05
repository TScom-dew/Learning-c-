#include <stdio.h>

int main() {
	// your code goes herer
	FILE *fptr;
	fptr=fopen("numberodd", "w");
	
	int n;
	printf("Enter n:\n");
	scanf("%d",&n);
	printf("\n Value on file:");
	for(int i=1;i<=n ; i++)
	{
	  if(i%2!=0)
	  {
	    fprintf(fptr,"%d\t",i);
	    printf(" %d\t",i);
	    
	  }
	}
	fclose(fptr);// closing opened FILE
	// now reading the file data
	FILE *ptr2;
	ptr2=fopen("numberodd", "r");
	
	int m;
	 fscanf(ptr2,"%d",&m);
	  printf("\n 1.value=%d",m);
	 
	 fscanf(ptr2,"%d",&m);
	  printf("\t 2.value=%d",m);
	 
	 fscanf(ptr2,"%d",&m);
	  printf("\t 3.value=%d",m);
	 
	 fscanf(ptr2,"%d",&m);
	  printf("\t 4.value=%d",m);
	 fscanf(ptr2,"%d",&m);
	  printf("\t 5.value=%d",m);
	 
	fclose(ptr2);
	return 0;
}







