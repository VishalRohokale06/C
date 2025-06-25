#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int num=1+i;
		for(int j=1;j<=i;j++){
			printf("%d\t",num++);
		}
		printf("\n");
	}
}
