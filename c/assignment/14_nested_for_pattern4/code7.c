#include <stdio.h>

int isPrime(int num){
	 for(int i=2;i<num;i++){
		 if(num%i==0)
			 return 0;
	 }
		 return 1;
}

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	int num=4;

	int total = rows*rows;
	int count=0;

	while(count<total){
		if(!isPrime(num)){
			printf("%d\t",num);
			count++;
			if(count%rows==0)
				printf("\n");
		}
		num++;

	}
}
