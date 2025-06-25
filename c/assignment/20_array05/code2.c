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

	int numSearch;
	int flag=0;

	printf("Enter Search Number: ");
	scanf("%d",&numSearch);

	for(int i=0;i<size;i++){
		if(numSearch == arr[i]){
			printf("The search number is found at index %d.\n",i);
			flag=1;
			break;
		}
	}
	if(flag==0){
			printf("The Search number is not found in an array.\n");
		}

}
