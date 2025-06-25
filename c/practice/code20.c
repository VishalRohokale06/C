#include <stdio.h>

int* fun(){
	int x=10;
	int *ptr = &x;
	return ptr;
}

void main(){

	printf("Start main\n");
	int *ptr2=fun();
	printf("%d\n",*ptr2);
	printf("End main\n");
}
