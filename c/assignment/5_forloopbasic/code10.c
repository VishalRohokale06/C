#include <stdio.h>

void main(){

	int input;
	printf("Input : ");
	scanf("%d",&input);
	int count=0;

	for(int i=1;i<=input;i++){
		if(input % i==0){
			count++;
		}
	}
	if(count>2){
		printf("Composite\n");
	}
	else{
		printf("Not Composite\n");
	}
}
