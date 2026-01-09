#include <stdio.h>

void main(){

	int num;
	printf("Enter num:");
	scanf("%d",&num);

	int rev=0;
	int temp=num;
	while(temp>0){
		int dig=temp%10;
		rev=rev*10+dig;
		temp/=10;
	}

	printf("Reverse of %d is %d\n",num,rev);
}
