#include <stdio.h>

void main(){

	int num;
	printf("Enter num:");
	scanf("%d",&num);

	int flag=0;

	while(num>0){
		int dig=num%10;
		if(dig == 0){
			flag=1;
		}
		num/=10;
	}

	if (flag==1){
		printf("Duck num\n");
	}else{
		printf("Not duck number\n");
	}
}
