#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	int count=0;
	for(int i=1;i<=rows;i++){
		int num=1;
		for(int sp=1;sp<=rows-i;sp++){
			printf("\t");
			count++;
		}
		for(int j=1;j<=i;j++){
			printf("%d\t",num++);
		}
		num-=2;
		for(int j=1;j<i;j++){
			printf("%d\t",num--);
		}			
		printf("\n");
	}
}
