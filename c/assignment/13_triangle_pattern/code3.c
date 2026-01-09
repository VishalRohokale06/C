#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int ch=64+i;
		for(int j=1;j<=i;j++){
			printf("%c\t",ch++);
		}
		printf("\n");
	}
}
