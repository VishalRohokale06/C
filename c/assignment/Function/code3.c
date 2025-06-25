#include <stdio.h>
#include <stdlib.h>

int* squr(int num1,int num2){
        int* sqr = malloc(10*sizeof(int));
        int j=0;
	for(int i=num1;i<=num2;i++){
           sqr[j] =i*i;
	   j++;
	}
	return sqr;

}

void main(){

	int num1;
	printf("Enter num1:");
	scanf("%d",&num1);

	int num2;
	printf("Enter num2:");
	scanf("%d",&num2);
       
	for(int i=0;i<=(num2-num1);i++){
	printf("%d\n",(squr(num1,num2))[i]);
	}
}
