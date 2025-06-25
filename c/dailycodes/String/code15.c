#include <stdio.h>

void main(){

	long unsigned int size = 15;

	//char str1[20];
	char *ptr1 = NULL;
	
	puts("Enter your name:");
	getline(&ptr1,&size,stdin);
	printf("%s",ptr1);
}
