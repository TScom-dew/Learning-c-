// sorting array in ascending array 
#include <stdio.h>

    int sortarray1(int arr[], int n){
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
            
        }
        // printing the value of sorted  array 
        printf("\n printing the value of sorted  array in ascending order \n");
        for(int i=0; i<n; i++){
            printf("%d\t",arr[i]);
        }
        printf("\n");
        return 0;
    }
    
    int sortarray2(int arr[], int n){
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]<arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        printf("\n Printing sorted  array in discending order\n");
        for(int i=0; i<n; i++){
            printf("%d\t", arr[i]);
        }
        printf("\n");
        return 0;
    }

int main(){
    // your code gose here
    int arr[]={2,5,3,7,4,8,1};
    int n=sizeof(arr)/4;
    printf("Original array \n");
    for(int i=0 ; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
    sortarray1(arr, n); // calling first function
    printf("\n again printing array value in main function \n");
    for(int i=0; i<n; i++){
        printf(" %d\t", arr[i]);
    }
    sortarray2(arr, n);  // calling second function 
    printf("\n again printing array value in main function \n");
    for(int i=0; i<n; i++){
        printf(" %d\t", arr[i]);
    }

    return 0;
}