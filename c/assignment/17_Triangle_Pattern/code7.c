#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
			if(i%2==0){
				printf("0\t");
			}else{
				if(i==1 || i==3) 
				printf("1\t");
				else
					printf("5\t");
			}
		}
		printf("\n");
	}
}
