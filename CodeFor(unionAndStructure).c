#include <stdio.h>

// Create a union   
 union myunion {    
     int rollno;
     long int id;
 };
 struct mystruct{
     int rollNo;
     long int Id;
 };
    

int main() {
    // using union
  union myunion u1;
  u1.rollno=35;
  u1.id=10000333;
  printf("Roll no.=%d\n student id=%ld\n",u1.rollno,u1.id);
 
    // using structure
    struct mystruct s1;
    s1.rollNo=35;
    s1.Id=10000333;
    printf(" Roll no.=%d\n Student id=%ld\n",s1.rollNo,s1.Id);
  return 0;
} /* Reasion behind the output :-
    1). In a struct, each member has its own memory.
    2).In a union, all members share the same memory, which means you can only use one of the values at a time.