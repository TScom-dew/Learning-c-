#include <stdio.h>

int main() {
	// your code goes herer
	FILE *ptr;
	ptr=fopen("student.txt", "w");
	
	char name[]="ashlokkumar";
	int rollno=1000;
	float cgpa=8.9;
	fprintf(ptr, " %s " ,name );
	fprintf(ptr, " %d " ,rollno );
	fprintf(ptr, " %f " ,cgpa );
	
	fprintf(ptr, " %s " ,"vikashkumar" );
	fprintf(ptr, " %d " ,2000 );
	fprintf(ptr, " %f " ,8.7 );
	
	fclose(ptr);
  FILE *ptr2;
  ptr2=fopen("student.txt", "r");
  
  char n[20];
  int  roll;
  float cgpap;
  fscanf(ptr2,"%s",&n);
  printf("Name:%s\n",n);
  fscanf(ptr2,"%d",&roll);
  printf("Roll No.:%d\n",roll);
  fscanf(ptr2,"%f",&cgpap);
  printf("CGPA=%.1f\n",cgpap);
  
  fscanf(ptr2,"%s",&n);
  printf("Name:%s\n",n);
  fscanf(ptr2,"%d",&roll);
  printf("Roll No.:%d\n",roll);
  fscanf(ptr2,"%f",&cgpap);
  printf("CGPA=%.1f\n",cgpap);
  
  fclose(ptr2);
  
  return 0 ;	
}

