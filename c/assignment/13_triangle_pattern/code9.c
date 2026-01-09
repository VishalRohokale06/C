#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=rows;i>0;i--){
		int ch=64+rows;
		for(int j=1;j<=i;j++){
			printf("%c\t",ch--);
		}
		printf("\n");
	}
}
