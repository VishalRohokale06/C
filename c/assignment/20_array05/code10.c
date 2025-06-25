#include <stdio.h>

void main(){

	int size;
	printf("Enter size: ");
	scanf("%d",&size);

	int arr1[size];
	int arr2[size];

	printf("Enter the elements for array 1:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter the elements for array 2:\n");
        for(int i=0;i<size;i++){
                scanf("%d",&arr2[i]);
        }

	for(int i=0;i<size;i++){
		int temp = arr1[i];
		arr1[i]=arr2[size-1-i];
		arr2[size-1-i]=temp;
	}
	printf("Array 1 after swap: ");
	for(int i=0;i<size;i++){
		printf("%d|",arr1[i]);
	}
	puts("");
	printf("Array 2 after swap: ");
        for(int i=0;i<size;i++){
                printf("%d|",arr2[i]);
        }
        puts("");
}
				
