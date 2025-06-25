#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of an array:\n");
	scanf("%d",&size);
	int sum=0;
	int arr[size];
	printf("Enter the elements:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Printing even elements:\n");
	for(int i=0;i<size;i++){
	if(arr[i]%2==0){
	printf("%d\n",arr[i]);
	}
	}
}	
			
