#include <stdio.h>
#include <stdbool.h>

void main(){

	int size1;
	printf("Enter size of array1\n");
	scanf("%d",&size1);

	int arr1[size1];
	printf("Enter elements of array1:\n");
        
	bool printed[size1];
	for(int i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
		printed[i]=false;
	}
	
	int size2;
        printf("Enter size of array2\n");
        scanf("%d",&size2);

        int arr2[size2];
        printf("Enter elements of array2:\n");

        for(int i=0;i<size2;i++){
                scanf("%d",&arr2[i]);
        }
        printf("Common elements:\n");
        for(int i=0;i<size1;i++){
	for(int j=0;j<size2;j++){
	if(arr1[i]==arr2[j] && !printed[i]){	
		printf("%d\n",arr1[i]);
		printed[i]=true;
	}
	}
	}
}
