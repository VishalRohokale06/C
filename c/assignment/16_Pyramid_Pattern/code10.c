#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	char ch = 65;
	for(int i=1;i<=rows;i++){
		for(int sp=1;sp<i;sp++){
			printf("\t");
		}
		for(int j=1;j<=2*(rows-i)+1;j++){
			printf("%c\t",ch);
		}
		ch++;
		printf("\n");
	}
}
