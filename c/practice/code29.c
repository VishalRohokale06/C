#include <stdio.h>
#include <stdlib.h>

void main(){

	int *ptr = (int*)malloc(sizeof(int)*5);
	*ptr=50;

	printf("%d\n",*ptr);
	free(ptr);
	printf("%d\n",*ptr);
}
