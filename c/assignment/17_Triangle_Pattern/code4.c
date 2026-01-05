#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int num=1;
		for(int j=1;j<=i;j++){
			if(j%2==1){
				printf("%d\t",num);
				num+=2;
			}else{
				printf("A\t");
			}
		}
		printf("\n");
	}
}
