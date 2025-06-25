#include <stdio.h>

void main(){

	int rows;
	printf("rows=");
	scanf("%d",&rows);

	int ch = 64+rows;

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("%c\t",ch);
		}
		printf("\n");
		ch--;
	}
}
