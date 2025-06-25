#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int num=i;
		for(int j=1;j<=i;j++){
			num=num*j;
			printf("%d\t",num);
		}
		printf("\n");
	}
}
