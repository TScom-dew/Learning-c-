#include <stdio.h>

int main() {
	// your code goes here
	FILE *ptr1;
	ptr1=fopen("replace.txt","w");
	
	int a=2,b=3;
	fprintf(ptr1,"%d\n",a);
	fprintf(ptr1,"%d",b);
	fclose(ptr1);
	//  file is opening for reading 
	FILE *ptr2;
	ptr2=fopen("replace.txt", "r");
	
	int p ,q;
	fscanf(ptr2,"%d",&p);
	printf("value of p:%d\n",p);
	fscanf(ptr2,"%d",&q);
	printf("value of q:%d\n",q);
	fclose(ptr2);
	//  file is again opening for writting
	FILE *ptr3;
	ptr3=fopen("replace.txt", "w");
	
	fprintf(ptr3,"%d",2+3);
	fclose(ptr3);
	//  at last time file is opening for reading
	FILE *ptr4;
	ptr4=fopen("replace.txt", "r");
	int r;
	fscanf(ptr4,"%d", &r);
	printf("\nsum of 2 and 3: %d", r);
	
	fclose(ptr4);
	return 0;
}



































