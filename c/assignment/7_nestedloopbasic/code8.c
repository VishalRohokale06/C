#include <stdio.h>

void main(){

	int rows;
	printf("rows=");
	scanf("%d",&rows);

	int num=rows;

	for(int i=1;i<=rows;i++){
		int ch=64+num;
		for(int j=1;j<=rows;j++){
			printf("%c\t",ch);
			ch--;
		}
		printf("\n");
	}
}
		
