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
        printf("The sum of digits of elements\n");
	for(int i=0;i<size;i++){
		int sum=0;
		int num=arr[i];
		while(num>0){
			int dig=num%10;
			sum+=dig;
			num/=10;
		}
		printf("%d\n",sum);
	}
}
