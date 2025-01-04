#include <stdio.h>

void main(){

	int rows;
	printf("rows=");
	scanf("%d",&rows);
        int num1 = rows;

	for(int i=1;i<=rows;i++){
		int num=num1;
		for(int j=1;j<=rows;j++){
			printf("%d\t",num);
			num--;
		}
		printf("\n");
	}
}

