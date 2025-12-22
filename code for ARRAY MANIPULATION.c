#include <stdio.h>

int main() {
	// your code goes herer
	int arr[20]={0,1,2,3,4,5,6,7,8,9};
	// simple array
   printf("  \n");

  for(int i=0;i<10;i++)
	{
	  printf("%d\t",arr[i]);
	}

	// now make change
	//reversing the array
	for(int i=0;  i<10/2;i++)
	{
	  int first=arr[i];
	  int last=arr[9-i];
	  arr[i]=last;
	  arr[9-i]=first;
	}
	printf("\nnow printing the reverse array\n");
	//now printing the reverse array

	 for(int i=0;i<10 ; i++) {
	     printf(" %d\t",arr[i]);
	   }
	  //now inserting on reverse  array  10 at position 5th
	  printf("\n now inserting on reverse array 10 at position 5th\n");
	  
	  arr[4]=10 ;
	   for(int i=0;i<10 ; i++) {
	     printf(" %d\t",arr[i]);
	   }
	 
	  // remove the 1nd element from reverse array and placing new element
	 // int laststore;
	   int laststore=arr[9];
	    for(int i=9;i>0;i--)
	    {
	     
	       
	      arr[i]=arr[i-1];
	      
	    
	    }
	    
	    
	    arr[0]=100;
	    
	    
	   
	  printf("\nremove the 1nd element from reverse array and placing new element\n");
	  for(int i=0;i<10 ; i++)
	   {
	     printf(" %d\t",arr[i]);
	   }
	  
	  
	return 0 ;
}

