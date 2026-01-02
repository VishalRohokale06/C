#include <stdio.h>

void main(){

        int size1;
        printf("Enter the size of the array 1:\n");
        scanf("%d",&size1);

        int arr1[size1];
        printf("Enter the elements:\n");

        for(int i=0;i<size1;i++){
                scanf("%d",&arr1[i]);
        }


        int size2;
        printf("Enter the size of the array 2:\n");
        scanf("%d",&size2);

        int arr2[size2];
        printf("Enter the elements:\n");

        for(int i=0;i<size2;i++){
                scanf("%d",&arr2[i]);
        }

        if(size1 == size2){
                printf("Both arrays are equal\n");
        }else{
                printf("Both arrays are unequal\n");
        }
}
