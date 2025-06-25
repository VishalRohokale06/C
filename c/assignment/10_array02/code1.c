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
	printf("Here is your arrray:\n");
	for(int i=size-1;i>=0;i--){
		printf("%d\n",arr[i]);
	}
}
