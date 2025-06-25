#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of the array:\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the elements:\n");
        for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int flag=0;
	for(int i=0;i<size;i++){
		int sum=0;
		int num=arr[i];
			for(int j=1;j<num;j++){
				if(num%j==0){
				sum+=j;
				}
			}
		if(sum==arr[i]){
			flag=1;
		}

	}
	if(flag==1){
		printf("Array contains perfect number\n");
	}else{
		printf("Array doesn't contain perfect number\n");
	}
}
