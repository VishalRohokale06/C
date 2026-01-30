#include <stdio.h>

void main(){

	int x=50;
	int *ptr1=&x;
	int *ptr2=ptr1;

	printf("%d\n",x);
	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);

	*ptr2=100;

	printf("%d\n",x);
        printf("%d\n",*ptr1);
        printf("%d\n",*ptr2);
}
