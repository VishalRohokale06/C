#include <stdio.h>

void main(){

	int num;
	printf("Enter num:");
	scanf("%d",&num);

	int fsum=0;
	int temp=num;
	while(num>0){
		int dig=num%10;
		int fact=1;
		for(int i=dig;i>0;i--){
			fact*=i;
		}
		fsum+=fact;
		num/=10;
	}

	if(fsum==temp){
		printf("Strong number\n");
	}else{
		printf("Not strong number\n");
	}
}
