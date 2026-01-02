#include <stdio.h>

void main(){

	int size;
	printf("Enter size:");
	scanf("%d",&size);

	int arr1[size];
	printf("Enter the elements for array 2:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr1[i]);
	}

	int arr2[size];
	printf("Enter the elements for array 2:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr2[i]);
	}

	int arr3[size];

	for(int i=0;i<size;i++){
		arr3[i]=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=arr3[i];
	}
	printf("Array 1:");
	for(int i=0;i<size;i++){
		printf("%d|",arr1[i]);
	}
	printf("\n");
	printf("Array 2:");
        for(int i=0;i<size;i++){
                printf("%d|",arr2[i]);
        }
        printf("\n");
}

