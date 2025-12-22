#include <stdio.h>

int main() {
	// your code goes herer
	 char *ptr;
	 ptr=(char*)malloc(5*sizeof(char));
	 
	 ptr="ashlok";
	 printf("1.string:%s\n",ptr);
	 ptr="kumar";
	 printf("2.string:%s\n",ptr);
	 ptr="hazaribagh";
	 printf("3.string:%s\n",ptr);
	 
	 
	 return 0;
}

