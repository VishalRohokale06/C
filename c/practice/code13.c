#include <stdio.h>
int y;

void main(){
	
	int x=10;
	int *ptr;
	ptr=&x;

	printf("%d\n",*ptr);
	printf("%d\n",x);
	x=50;
	printf("%d\n",*ptr);
	printf("%d\n",x);
	printf("%p\n",ptr);
	printf("%p\n",&ptr);
	printf("%p\n",&x);
}
