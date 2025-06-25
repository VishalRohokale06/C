#include <stdio.h>

void main(){

	int arr[3]={10,20,30,40,50};
	int *ptr = &(arr[0]);
	int *ptr1 = &(arr[4]);

//	printf("%d\n",*ptr);
	printf("%d\n",ptr-ptr1);

}
