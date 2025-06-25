#include <stdio.h>

void main(){

	int size;
	printf("Enter size of an array:\n");
	scanf("%d",&size);

	int product=1;

	int arr[size];
	printf("Enter the elements:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
		if(i%2==1){
			product*=arr[i];
		}
	}
	printf("Product of odd indexed elements is:%d\n",product);
}

