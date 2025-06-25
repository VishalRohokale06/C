#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of the array:\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the elements\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
        printf("Output\n");
	for(int i=0;i<size;i++){
               int fact=1;
		int num=arr[i];
		for(int j=num;j>0;j--){
			fact*=j;
		}
		printf("%d\n",fact);
	}
}
