#include <stdio.h>

void main(){

	int num;
	printf("Enter number:");
	scanf("%d",&num);

	int sum=0;
	for(int i=1;i<=num/2;i++){
		if(num%i==0){
			sum+=i;
		}
	}

	if(sum<num){
		printf("Deficient number\n");
	}
	else{
		printf("Not deficient number\n");
	}
}
