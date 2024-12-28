#include <stdio.h>

void main(){
	int number;

	printf("Enter number:");
	scanf("%d",&number);

	if(number %5 == 0 || number %10 == 0){
		printf("Number is divisibel\n");
	}
	else{
		printf("Number is not divisibel\n");
	}
}
