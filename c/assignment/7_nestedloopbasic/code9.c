#include <stdio.h>

void main(){

	int rows;
	printf("rows=");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		char ch='a';
		for(int j=1;j<=rows;j++){
			printf("%c1\t",ch);
			ch++;
		}
		printf("\n");
	}
}


