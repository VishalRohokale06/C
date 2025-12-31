#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int ch=64+rows;
		for(int sp=1;sp<i;sp++){
			printf("\t");
		}
		for(int j=rows;j>i-1;j--){
			printf("%c\t",ch--);
		}
		printf("\n");
	}
}
