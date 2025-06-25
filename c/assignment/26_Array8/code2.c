#include <stdio.h>

void main(){

	int size;
	printf("Enter size:");
	scanf("%d",&size);

	int arr[size];
	printf("Enter elements of array:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
        
	int osum=0;
	int esum=0;

	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			esum+=arr[i]*arr[i];
		}else{
			osum+=arr[i]*arr[i];
		}
	}
	printf("Difference between the sum of squares of even elements and sum of squares of odd elements: %d\n",esum-osum);
}

