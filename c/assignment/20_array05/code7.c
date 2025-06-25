#include <stdio.h>

void main(){

	int num;
	printf("Enter Number: ");
	scanf("%d",&num);

	int size=10;
	int table[size];
	int *ptr=table;

	for(int i=0;i<size;i++){
		*(ptr+i)=num*(i+1);
	}

	for(int i=0;i<size;i++){
		printf("|%d|",*(ptr+i));
	}
	puts("");
}
