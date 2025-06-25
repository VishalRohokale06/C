#include <stdio.h>

void main(){

	int size;
	printf("Enter size:");
	scanf("%d",&size);

	int arr[size];
	printf("Enter elements:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	int maxRight=arr[size-1];
	printf("Leader elements:%d\t",maxRight);

	for(int i=size-2;i>=0;i--){
		if(arr[i]>maxRight){
			maxRight=arr[i];
			printf("%d\t",maxRight);
		}
	}
	puts("");
}
