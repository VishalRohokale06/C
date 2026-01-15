#include <stdio.h>

void main(){

	int num;
	printf("Enter number\n");
	scanf("%d",&num);
         
	printf("Array of factors of %d are\n",num);
	for(int i=1;i<=num;i++){
		if(num%i==0){
			printf("%d\n",i);
		}
	}
}
