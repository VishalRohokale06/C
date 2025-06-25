#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int num=i;
		for(int sp=1;sp<=rows-i;sp++){
			printf("\t");
		}
		for(int j=1;j<=i;j++){
			printf("%d\t",num);
			num+=i;
		}
		printf("\n");
	}
}
