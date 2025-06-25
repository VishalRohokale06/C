#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=0;i<rows;i++){
		for(int j=0;j<rows;j++){
			printf("C3\t");
		}
		printf("\n");
	}
}
