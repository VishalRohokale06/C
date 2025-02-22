#include <stdio.h>

int* arrCube(int arr[],int size){

	for(int i=0;i<size;i++){
		printf("%d\n",(arr[i]*arr[i]*arr[i]));
	}
}

void main(){

	int size;
	printf("Enter size:");
	scanf("%d",&size);

	int arr[size];
	printf("Enter elements in arr:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	arrCube(arr,size);
}
