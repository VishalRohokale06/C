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
        int i=0,j=0;
	for(int k=0;k<size1+size2;k++){
        if(i<size1 || j<size2){
		if(i<size1){
			printf("%d|",arr1[i]);
			i++;
		}
		if(j<size2){
			printf("%d|",arr2[j]);
			j++;
		}
	}
	}
	printf("\n");
}
