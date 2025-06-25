#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=rows;i>0;i--){
		int num=rows-i+1;
		for(int j=1;j<=i;j++){
			printf("%d\t",num++);
		}
		printf("\n");
	}
}
