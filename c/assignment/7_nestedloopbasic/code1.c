#include <stdio.h>

void main(){

	int rows;
	printf("rows : ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("1\t");
		}
		printf("\n");
	}
}
