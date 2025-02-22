#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of array\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the elements of array:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
        int flag=0;
	for(int i=0;i<size;i++){
		int num=arr[i];
		int reverse=0;
		while(num>0){
			int dig=num%10;
			reverse=reverse*10+dig;
			num/=10;
		}
		if(reverse==arr[i]){
			flag=1;
		}

	}
	if(flag==1){
		printf("Array contains Palidrome number\n");
	}else{
		printf("Array doesn't contains Palidrome number\n");
	}
}
