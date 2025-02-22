#include <stdio.h>

void main(){

	int x=10;
	char ch='A';
	float f=10.2;
	double d=111.11;

	int *ptr1=&x;
	char *ptr2=&ch;
	float *ptr3=&f;
	double *ptr4=&d;


	printf("%d\n",*ptr1);
	printf("%c\n",*ptr2);
	printf("%f\n",*ptr3);
	printf("%lf\n",*ptr4);
}
