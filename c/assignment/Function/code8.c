#include <stdio.h>

int isArmstrong(int num){

	int temp=num;
	int count=0;

	while(temp>0){
		int dig=temp%10;
		count++;
		temp/=10;
	}
        
	int sum=0;

	while(num>0){

		int dig=num%10;
		int prd=1;
		for(int i=1;i<=count;i++){
			prd*=dig;
		}
		sum+=prd;
		num/=10;
	}
	return sum;
}

void main(){

	int num;
	printf("Enter num:");
	scanf("%d",&num);

	if(num==isArmstrong(num)){
		printf("Armstrong\n");
	}else{
		printf("Not Armstrong\n");
	}
}
