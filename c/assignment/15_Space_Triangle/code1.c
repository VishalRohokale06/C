#include <stdio.h>

void main(){
        
	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int space=1;space<=rows-i;space++){
			printf("\t");
		}
		for(int j=1;j<=i;j++){
			printf("%d\t",j);
		}
		printf("\n");
	}
}
