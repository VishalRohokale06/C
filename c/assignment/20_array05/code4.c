#include <stdio.h>

void main(){

        int size;
        printf("Enter the size of the array:\n");
        scanf("%d",&size);

        int arr[size];
        printf("Enter the elements:\n");

        for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);

        }
        puts("Output:");
        for(int i=0;i<size;i++){
                for(int j=0;j<=i;j++){
                        printf("%d\t",arr[j]);
                }
                printf("\n");
        }
}
