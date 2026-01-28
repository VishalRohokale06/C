#include <stdio.h>

void main(){

	int size;
	printf("Enter size:");
	scanf("%d",&size);

	int arr1[size];
	int arr2[size];

	printf("Enter elements arr1:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter elements arr2:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr2[i]);
	}

	int result[size];
        printf("Difference:\n");
	for(int i=0;i<size;i++){
		result[i]=arr1[i]-arr2[i];
		printf("%d\n",result[i]);
	}
}
