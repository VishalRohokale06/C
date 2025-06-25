#include <stdio.h>

void fun() __attribute__((constructor));
void run() __attribute__((destructor));

void fun(){
	printf("In fun-before\n");
}
void run(){
	printf("In run-after\n");
}

void main(){

	printf("S\n");
	printf("i\n");
	printf("E\n");
}
