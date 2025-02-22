#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of the array\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the elements\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
        int flag=0;
	for(int i=0;i<size;i++){
		int num=arr[i];
		int sum=0;
		while(num>0){
			int fact=1;
			int dig=num%10;
			for(int j=dig;j>0;j--){
				fact*=j;
			}
			num/=10;
		sum+=fact;
		}
		if(sum==arr[i]){
			flag=1;
		}
	}
	if(flag==1){
		printf("Array contain Strong Number\n");
	}else{
		printf("Array doesn't contain Strong Number\n");
	}
}
