#include <stdio.h>

void main(){

	int size1;
	int size2;
	printf("Enter size of array 1:\n");
	scanf("%d",&size1);
        

	int sum1=0;
	int sum2=0;

	int arr1[size1];
	printf("Enter the elements:\n");

	for(int i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
		sum1+=arr1[i];
	}
	printf("-------------------\n");

	printf("Enter size of array 2:\n");
	scanf("%d",&size2);

	int arr2[size2];
	printf("Enter the elements:\n");

	for(int i=0;i<size2;i++){
                scanf("%d",&arr2[i]);
		sum2+=arr2[i];
        }

	if(sum1==sum2){
		printf("The sum of both array is same.\n");
	}else{
		printf("The sum of both array is not same.\n");
}
}
