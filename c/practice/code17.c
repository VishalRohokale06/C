#include <stdio.h>

void main(){
	int x,y,z;
	x=10;
	y=20;
	z=30;
	int* ptr1=&x;
	int* ptr2=&y;
	int* ptr3=&z;

	int** ptr4=&ptr1;
	int** ptr5=&ptr2;
	int** ptr6=&ptr3;

	printf("%d\n",x);
	printf("%d\n",*ptr1);
	printf("%d\n",**ptr4);
}
