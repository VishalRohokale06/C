#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of an array:\n");
	scanf("%d",&size);
	int arr[size];
	int sum=0;

	printf("Enter the elements:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
		if(i%2==0){
			sum+=arr[i];
	}
	}
	printf("Sum of even indexed elements:\t%d",sum);
	printf("\n");
}
