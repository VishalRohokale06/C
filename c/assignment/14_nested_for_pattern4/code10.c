#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=0;i<rows;i++){
		for(int j=0;j<rows;j++){
			if(i==j || i+j==rows-1){
				printf("1\t");
			}else{
				printf("0\t");
			}
		}
		printf("\n");
	}
}
