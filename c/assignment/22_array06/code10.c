#include <stdio.h>

void main(){

	int size;
	printf("Enter the size:\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter elements:\n");

	for(int i=0;i<size;i++){

		scanf("%d",&arr[i]);
	}

	printf("Output:\n");

	if(size%2==0){
	for(int i=0;i<size;i++){
			printf("%d\n",arr[i++]);
	}
	}
	else{
		for(int i=0;i<size;i++){
			printf("%d\n",arr[i]);
		}
	}
}
