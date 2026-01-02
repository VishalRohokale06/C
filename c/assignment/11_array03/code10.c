#include <stdio.h>

void main(){

	int size1;
	printf("Enter array1 size:");
	scanf("%d",&size1);

	int arr1[size1];
	printf("Enter the elements for array1:\n");

	for(int i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
	}

	printf("-----------\n");

	int size2;
	printf("Enter array2 size:");
	scanf("%d",&size2);

	int arr2[size2];
	printf("Enter the elements for array2:\n");

	for(int i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}

	int esum1=0;
	int osum2=0;

	for(int i=0;i<size1;i++){
		if(i%2==0){
			esum1+=arr1[i];
		}
	}
	for(int i=0;i<size2;i++){
		if(i%2==1){
			osum2+=arr2[i];
		}
	}
	printf("Sum of even index elements of first array = %d\n",esum1);
	 printf("Sum of odd index elements of second array = %d\n",osum2);
}
