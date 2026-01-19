#include <stdio.h>

int isStrong(int num){
       
	int sum=0;
	int temp=num;
	while(num!=0){
		int dig=num%10;
		int fact=1;
		for(int i=1;i<=dig;i++){
		    fact*=i;
		}
		sum+=fact;
		num/=10;
	}
	if(sum==temp){
	printf("Num is strong number.\n");
	}else{
		 printf("Num is not strong number.\n");
	}
}

void main(){

	int num;
	printf("Enter number:");
	scanf("%d",&num);

	isStrong(num);
}
