#include <stdio.h>

void main(){

	int x=10;
	char ch='A';
	void *ptr = &ch;
	void *ptr1= &x;

	printf("%d\n",*((char*)ptr));
	printf("%d\n",*((int*)ptr1));
}
