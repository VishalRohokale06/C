#include <stdio.h>

void main(){

	int num;
	printf("ENter num:");
	scanf("%d",&num);

	int sum=0;
	for(int i=1;i<=num/2;i++){
		if(num%i==0){
			sum+=i;
		}
	}

	if(sum==num){
		printf("Perfect\n");
	}else{
		printf("Not perfect\n");
	}
}
