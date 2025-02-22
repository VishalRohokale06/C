#include <stdio.h>

void main(){

	int size;
	printf("Enter the size of array:\n");
	scanf("%d",&size);

	char chArray[size];
	printf("Enter the elements:\n");
	getchar();

	for(int i=0;i<size;i++){
		scanf("%c",&chArray[i]);
		getchar();
	}
        printf("--------------\n");
	for(int i=0;i<size;i++){
		printf("%c|",chArray[i]);
		i++;
	}
	printf("\n");
}
