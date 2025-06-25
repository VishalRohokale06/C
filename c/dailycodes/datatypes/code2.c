#include <stdio.h>

//int printf (const char *__restrict __format, ...);

void main(){
	int x;
	float y;
	double d;
	long l;
	char ch;
	//void vo = 0;

	printf("Size of int :%zu bytes\n",sizeof(x));
	printf("Size of folat :%zu bytes\n",sizeof(y));
	printf("Size of double :%zu bytes\n",sizeof(d));
	printf("Size of long :%zu bytes\n",sizeof(l));
	printf("Size of char :%zu bytes\n",sizeof(ch));
	//printf("Size of void :%zu bytes\n",sizeof(vo));
}
