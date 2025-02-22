#include <stdio.h>

int isNiven(int num){

	int temp=num;
	int sum=0;

	while(temp>0){
		int dig=temp%10;
		sum+=dig;
		temp/=10;
	}
	if(num%sum==0){
		return 1;
	}
	return 0;
}

void main(){

	int num;
	printf("Enter num:");
	scanf("%d",&num);

	if(isNiven(num)){
		printf("Niven/Harshad Number\n");
	}else{
		printf("No Niven/Harshad Number\n");
	}
}
