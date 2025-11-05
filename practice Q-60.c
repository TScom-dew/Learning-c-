#include <stdio.h>
#include <string.h>
 typedef struct bankinformation
{
  char name[20];
  long account ;
}bi;
    //void print(struct bankinformation f);
    
    //we have to print information by using print funtion @@@@

int main() {
	// your code goes herer
   bi f1={"ashlok" ,587498578452165};
   
	printf("Customer Name :%s\t",f1.name);
    printf("Account Number :%ld\n",f1.account);
    //printf("Customer Name :%s\t",i[].customer_name);
   // printf("Account Number :%ld\n",i[0].account_number);
    
  // printfunction( f , 0);
   return 0 ;
}
//  void printfunction(struct bankinformation f, int a)
  //   {
     // printf("Customer Name :%s\t",f[a].balence);
    // printf("Account Number :%ld\n",f[a].account_number);
    // }
