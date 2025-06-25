//VOID POINTER

#include <stdio.h>

void main(){

	int x=10;
	char ch='A';
	//int *ptr1=&ch;
	//char *ptr2=&x;

	void *ptr1=&ch;
	void *ptr2=&x;

	printf("%c\n",*((char*)ptr1));
	printf("%d\n",*((int*)ptr2));
		}
		
