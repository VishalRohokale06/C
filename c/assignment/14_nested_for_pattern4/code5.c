#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	int num=1;
	for(int i=1;i<=rows;i++){
		int val = num;
		for(int j=1;j<=rows;j++){
			printf("%d\t",val);
			val+=num;
		}
		num+=rows;
		printf("\n");
	}
}
