#include <stdio.h>

void main(){

	int rows;
	printf("rows=");
	scanf("%d",&rows);

	for(int i=0;i<rows+1;i++){
		for(int j=1;j<rows+1;j++){
			if(j%2==1){
				printf("*\t");
			}
			else{
				printf("#\t");
			}
		}
		printf("\n");
	}
}
