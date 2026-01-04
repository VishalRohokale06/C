#include <stdio.h>

void main(){

	int rows;
	printf("rows=");
	scanf("%d",&rows);

	int num=1;

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("%d\t",rows*num++);
		}
		printf("\n");
	}
}
			
