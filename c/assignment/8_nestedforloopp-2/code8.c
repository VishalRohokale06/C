#include <stdio.h>

void main(){

	int rows;
	printf("rows=");
	scanf("%d",&rows);
	char ch='A';

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("%c%d\t",ch,j);
		}
		printf("\n");
	}
}

