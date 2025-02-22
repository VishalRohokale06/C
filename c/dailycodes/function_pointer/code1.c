#include <stdio.h>

void fun(){
	printf("Start fun\n");
	printf("End fun\n");
}

void main(){
	void(*ptr)()=&fun;
	ptr();
}

