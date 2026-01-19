#include <stdio.h>

int fact(int num){

	int fact=1;

	for(int i=1;i<=num;i++){
		fact*=i;
	}
	return fact;
}

void main(){
       
	int num;
	printf("Enter number:");
	scanf("%d",&num);

	printf("Factorial: %d\n",fact(num));
}
