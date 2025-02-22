#include <stdio.h>

int* fun(){
	int x=10;
	return &x;
}

void main(){
	printf("Start Main\n");
	int* ptr2 = fun();
	printf("End Main\n");
}
