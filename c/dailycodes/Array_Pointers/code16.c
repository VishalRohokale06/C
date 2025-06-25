#include <stdio.h>

void main(){

	int arr[] = {10,20,30};
	printf("%d\n",arr[0]);

	int *ptr = &(arr[0]);
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
	printf("%p\n",arr);
}
