#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of the array:\n");
	scanf("%d",&size);

	int arr[size],copy[size];
	printf("Enter the elements:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
		copy[i]=arr[i];
	}
	printf("Here is your second array:\n");
	for(int i=0;i<size;i++){
		printf("%d\n",copy[i]);
	}
}
