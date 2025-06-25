#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of array:");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the elements:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	int value;
	printf("Enter the index value up to which you want to print the elements:\n");
	scanf("%d",&value);

	for(int i=0;i<size;i++){
		if(value<size){
			for(int i=0;i<value;i++){
			printf("%d|",arr[i]);
		}
			break;
		}else{
			printf("\n");
			printf("Index cannot be greater than size.Re-Enter the index value:\n");
		scanf("%d",&value);
		}
	
	}
	printf("\n");
}
