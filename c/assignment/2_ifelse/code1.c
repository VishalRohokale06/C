#include <stdio.h>

void main(){
	int number;

	printf("Enter number:");
	scanf("%d",&number);

	if(number>0){
		printf("%d is positive\n",number);
	}else if(number<0){
		printf("%d is negative\n",number);
	}
	else{
		printf("The number %d is considered neutral\n",number);
	}

}
