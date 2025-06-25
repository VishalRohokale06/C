#include <stdio.h>

void main(){

	int x=10;
	int *ptr;
	ptr=&x;

	printf("%d\n",x);
	printf("%d\n",*ptr);
	printf("%p\n",ptr);

	printf("%p\n",&ptr);
	printf("%p\n",&x);

}
