#include <stdio.h>

int isPrime(int num){
        
	int flag=0;
//pr=1;comp=2;noprcomp=3;
	if(num<2){
		return flag=3;
	}
	for(int i=2;i*i<=num;i++){
		if(num%i==0)
			return 2;
	}
	return 1;
}

void main(){

	int num;
	printf("Enter num:");
	scanf("%d",&num);

	if(isPrime(num) == 1){
		printf("Prime number.\n");
	}else if(isPrime(num) == 2){
		printf("Composite number.\n");
	}
	else{
		printf("Nothing.\n");
	}
}
