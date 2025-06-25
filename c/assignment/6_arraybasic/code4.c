#include <stdio.h>

void main(){

	int size;
	printf("Enter the elements:\n");
	scanf("%d",&size);

	int product=1;
	int arr[size];
	printf("Enter the elements:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			product*=arr[i];
		}
	}
	printf("Product of even elements:%d\n",product);
}
