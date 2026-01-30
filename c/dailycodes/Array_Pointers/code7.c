#include <stdio.h>

void main(){

	int arr1[3] = {10,20,30};
	int* arr2;

	arr2=arr1;

	for(int i=0;i<3;i++){
		printf("%d\n",arr2[i]);
	
	}
	printf("%p\n",arr1);
	printf("%p\n",arr2);
}
