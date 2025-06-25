#include <stdio.h>

void main(){

	int size1;
	printf("Enter size1:");
	scanf("%d",&size1);

	int arr1[size1];
	printf("Enter elements of arr1:\n");

	for(int i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
	}

	int size2;
        printf("Enter size2:");
        scanf("%d",&size2);

        int arr2[size2];
        printf("Enter elements of arr1:\n");

        for(int i=0;i<size2;i++){
                scanf("%d",&arr2[i]);
        }

	int sum;
	printf("Sum:");
	scanf("%d",&sum);

	int count=0;

	for(int i=0;i<size1;i++){
		for(int j=0;j<size2;j++){
			if(sum==arr1[i]+arr2[j]){
				count++;
			}
		}
	}

	printf("Pair sum count is %d\n",count);
}
