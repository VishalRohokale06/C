#include <stdio.h>

void main(){

	int x;
	printf("Input : ");
	scanf("%d",&x);

	int count=0;

	for(int i=2;i<=10;i++){
		if(x%i == 0){
			count++;
		}
	}
	printf("Divisor of %d between 2 and 10 = %d\n",x,count);
}



