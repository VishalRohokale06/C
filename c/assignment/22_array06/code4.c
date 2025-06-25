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

	int min;

	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("Minimum ELement:%d\n",min);
}

