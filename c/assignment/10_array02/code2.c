#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of the array:\n");
	scanf("%d",&size);

	char arr[size];
	printf("Enter the character\n");
	getchar();
	for(int i=0;i<size;i++){
		scanf("%c",&arr[i]);
		getchar();

	}
	printf("---------------\n");
	for(int i=0;i<size;i++){
               printf("%d\n",arr[i]);
        }
}
