#include <stdio.h>

void main(){

	long unsigned int size = 15;
	char str1[20];
	char *ptr = &str1;
	getline(&ptr,&size,stdin);
	puts(str1);
}
