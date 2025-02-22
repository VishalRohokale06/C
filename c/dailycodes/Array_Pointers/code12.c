#include <stdio.h>

void main(){

	int arr[5] = {10,20,30,40,50};

	int *ptr1 = &(arr[1]);
	int *ptr2 = &(arr[3]);

	printf("%ld\n",ptr2-ptr1);
}
