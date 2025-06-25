#include <stdio.h>

void main(){

	int num;
	printf("Enter num:");
	scanf("%d",&num);

	int count=0;
	while(num>0){
		num%10;
		count++;
		num/=10;
	}
	printf("%d\n",count);
}
