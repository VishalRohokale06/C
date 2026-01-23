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

	int evenCount=0;
	int oddCount=0;

	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			evenCount++;
		}else{
			oddCount++;
		}
	}
	printf("Even Elements Count :%d\n",evenCount);
	printf("Odd Elements Count :%d\n",oddCount);
}
