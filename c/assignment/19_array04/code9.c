#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of array\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the elements\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
        int flag=0;
	for(int i=1;i<size;i++){
		if(arr[i]>arr[i-1]){
			flag=1;
		}else{
			flag=0;
			break;
		}
	}
	if(flag==1){
		printf("This is an increasing array\n");
	}else{
		printf("This is not an increasing array\n");
	}
}
