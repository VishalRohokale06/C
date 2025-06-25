#include <stdio.h>

void main(){

	int num;
	printf("Enter num:");
	scanf("%d",&num);

	int rev=0;
	int temp=num;
	while(num>0){
		int dig=num%10;
		rev=rev*10+dig;
		num/=10;
	}

	if(rev==temp){
		printf("%d is palidrome number\n",temp);
	}
	else{
		printf("Not palidrome number\n");
	}
}
