#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of the array:\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the numbers:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
        int max=0;
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	
	}
	printf("The largest elements in an array is %d\n",max);
}
