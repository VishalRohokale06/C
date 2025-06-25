#include <stdio.h>

void main(){
	int arr1[] = {10,20,30};
	int arr2[] = {40,50,60};

	int *ptr1 = arr1;
	printf("%d\n",*ptr1);

	int *ptr2 = &arr1[1]+1;
	printf("%d\n",*ptr2);
}
