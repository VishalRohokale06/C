#include <stdio.h>

void main(){

        int size;
        printf("Enter size:\n");
        scanf("%d",&size);

        int arr[size];
        printf("Enter the elements:\n");

        for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);
        }

        int sum=0;

        printf("Sum of all elements of an array: ");
        for(int i=0;i<size;i++){
                sum+=arr[i];
                }
        printf("%d\n",sum);
}
