#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int num=i;
		for(int j=1;j<=rows;j++){
			if(num>rows){
				num=1;
			}
			printf("%d\t",num++);
		}
		printf("\n");
	}
}
