#include <stdio.h>

void main(){

	int size;
	printf("Enter size:\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the elements in the array:\n");

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
        int num;
	printf("Enter elements:");
	scanf("%d",&num);
        
	int count;
	int flag=0;
	for(int i=0;i<size;i++){
		if(num==arr[i]){
			flag=1;
			count++;
		}
	}
	if(flag==1){
		printf("Frequency of %d is %d\n",num,count);
	}else{
		printf("%d is not present in the array\n",num);
	}
}
