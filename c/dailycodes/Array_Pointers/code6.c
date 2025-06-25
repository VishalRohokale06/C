#include <stdio.h>

void main(){

	int size;
	printf("Enter array size:");
	scanf("%d",&size);

	int arr[size];
	printf("Enter array elements:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&(arr[i]));
	}
	printf("Array elements are:\n");
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
}
