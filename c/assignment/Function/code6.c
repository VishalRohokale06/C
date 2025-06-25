#include <stdio.h>

int isPalidrom(int num){

	int rev=0;
	int temp=num;
	while(num!=0){
		int dig=num%10;
		rev=rev*10+dig;
		num/=10;
	}

	if(rev==temp)
		return 1;
	else
		return 2;
}

void main(){

	int num;
	printf("Enter num:");
	scanf("%d",&num);

	if(isPalidrom(num)==1){
		printf("Palidrom.\n");
	}else{
		printf("Not Palidrom.\n");
	}
}
