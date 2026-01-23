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
	
	int index;
	printf("Enter the index: ");
	scanf("%d",&index);
         
	int flag=0;

	for(int i=0;i<size;i++){
		if(index==i){
			printf("The element at the given index is %d\n",arr[i]);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("The index is greater than the size of an array.\n");
	}
}
