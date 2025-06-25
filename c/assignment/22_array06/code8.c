#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of array:\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter elements of array:\n");
        
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Output:\n");
	for(int i=0;i<size;i++){
		int num=arr[i];
		int sum=0;
		while(num>0){
			int dig=num%10;
			sum+=dig;
			num/=10;
		}
		if(sum%2==0){
			printf("%d\n",arr[i]);
		}
	}
}
