#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of the array:\n");
	scanf("%d",&size);

	int arr[size],copy[size];
	printf("Enter the character:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		copy[i]=arr[size-i-1];
	}
        printf("-------------\n");
	printf("Output:\n");
	for(int i=0;i<size;i++){
		printf("%d\n",copy[i]);
	}
}

