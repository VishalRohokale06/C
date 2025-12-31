#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=0;i<rows;i++){
		int num=rows;
		for(int space=1;space<rows-i;space++){
			printf("\t");
		}
		for(int j=0;j<=i;j++){
			printf("%d\t",num--);
		}
		printf("\n");
	}
}
