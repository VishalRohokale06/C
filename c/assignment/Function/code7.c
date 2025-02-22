#include <stdio.h>

int isduck(int num){
        
	int temp=num;
	while(temp>0){
		if(temp%10==0){
			return 1;
		}
		temp/=10;
	}
	return 0;
}

void main(){

	int num;
	printf("Enter num:");
	scanf("%d",&num);

	if(isduck(num)==0){
			printf("Not duck");
			}
			else{
			printf("Duck");
			}
}
