#include <stdio.h>

void main(){

	int size;
	printf("Enter size:\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the elements:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
        
	printf("First elements divisible by 5 found at index ");
	for(int i=0;i<size;i++){
		if(arr[i]%5==0){
			printf("%d\n",i);
			break;
		}
	}
}
