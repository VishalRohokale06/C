#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=rows;i>0;i--){
		for(int j=1;j<=i;j++){
			printf("%d\t",j);
		}
		printf("\n");
	}
}
