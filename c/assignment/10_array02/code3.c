#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of the array:\n");
	scanf("%d",&size);

	int square=0;
	int arr[size];
	printf("Enter the elements:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
		square+=(arr[i]*arr[i]);
	}
	printf("Sum of squares of all elements=%d\n",square);

}
