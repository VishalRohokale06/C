#include <stdio.h>

void main(){

	int rows;
	printf("rows:");
	scanf("%d",&rows);

	for(int i=0;i<rows;i++){
		for(int j=0;j<=i;j++){
			printf("%d\t",j+1);
		}
	printf("\n");
	}
}
