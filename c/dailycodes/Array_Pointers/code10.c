#include <stdio.h>

void main(){

	int x=30;
	int *ptr = &x;

	printf("%d\n",x);
	printf("%d\n",*ptr);

	*ptr=50;
	printf("%d\n",x);
        printf("%d\n",*ptr);
}
