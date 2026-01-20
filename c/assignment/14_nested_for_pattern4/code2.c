#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);
        
	int num=rows*(rows+1);
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("%d\t",num--);
		}
		printf("\n");
	}
}
