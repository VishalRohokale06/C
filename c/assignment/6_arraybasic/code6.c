#include <stdio.h>

void main(){

        int size;
        printf("Enter the size elements:\n");
        scanf("%d",&size);

        int sum=0;
        int arr[size];
        printf("Enter the elements:\n");

        for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);
             
                        sum+=arr[i];
                
        }
        printf("Sum of all elements:%d\n",sum);
} 
