#include <stdio.h>

void main(){

	int size;
	printf("Enter size:\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter array elements:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int evenSum=0;
	int oddSum=0;

	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			evenSum+=(arr[i]*arr[i]);
		}else{
			oddSum+=(arr[i]*arr[i]);
		}
	}
	printf("Difference: %d\n",evenSum-oddSum);
}
