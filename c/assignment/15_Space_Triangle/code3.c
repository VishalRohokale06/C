#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);
        
	for(int i=0;i<rows;i++){
		int ch=65;
		for(int space=1;space<rows-i;space++){
			printf("\t");
			ch++;
		}
		for(int j=0;j<=i;j++){
			printf("%c\t",ch++);
		}
		printf("\n");
	}
}
