#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	int num=rows;
	for(int i=1;i<=rows;i++){
		for(int sp=1;sp<i;sp++){
			printf("\t");
		}
		for(int j=rows;j>i-1;j--){
			printf("%d\t",num);
		}
		num--;
		printf("\n");
	}
}
