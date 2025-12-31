#include <stdio.h>
#include <stdbool.h>

void main(){

	int size;
	printf("Enter the size of the array:\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the elements:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	int sum;
	printf("Enter sum:");
	scanf("%d",&sum);
        bool isfound=false;
	for(int i=0;i<size;i++){
		for(int j=1;j<size;j++){
		if(arr[i]+arr[j]==sum){
			printf("index:%d and index:%d\n",i,j);
			isfound=true;
		       break;
		}
		
		}
		if(isfound) break;
	}
}

