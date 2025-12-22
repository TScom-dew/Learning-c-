#include <stdio.h>

        int sortfn1(int arr[], int n)// in discending order
        {
            for(int i=0; i<n ; i++)
            {
                for(int j=0; j<n ; j++)
                {
                    if(arr[j]<arr[j+1])
                    {
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
            printf("\n printing sorted array in discending order\n");
            for(int i=0; i<n ;i++)
            {
                printf("%d\t",arr[i]);
            }
            printf("\n");
            return 0; 
        }
        
        int sortfn2(int arr[], int n)    // in ascending order
        {
            for(int i=0; i<n ;i++)
            {
                for(int j=0; j<n-1 ; j++)
                {
                    if(arr[j+1]<arr[j])  
                    {
                        int temp2=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp2;
                    }
                }
            }
            printf("\n printing the sorted array in ascending order \n");
            for(int i=0; i<n; i++)
            {
                printf("%d\t", arr[i]);
            }
            printf("\n");
            return 0; 
        }

int main(){
    // your code gose here
    int arr[]={20,50,40,30,80,70,60,100,90,10};
    int n=sizeof(arr)/4;
    printf("printing the original array value without updating \n");
    for(int i=0; i<n ;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
    sortfn1(arr, n);
    printf("\n printing the value of original array in main function \n");
    for(int i=0; i<n ;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
    sortfn2(arr, n);
    
    printf("\n printing the value of original array in main function \n");
    for(int i=0; i<n ;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
    return 0;
}