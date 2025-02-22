#include <stdio.h>

int* fun(){
	int x=1000;
	int *ptr=&x;
	return ptr;
}

void main(){
	printf("Start Main\n");
	int *ptr2 = fun();
	printf("%p\n",ptr2);
	printf("End fun\n");
}
