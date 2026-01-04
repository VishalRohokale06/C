#include <stdio.h>

void main(){

	int rows;
	printf("rows=");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int num=rows;
		for(int j=1;j<=rows;j++){
			if(i%2==1){
				printf("%d\t",j);
			}else{
				printf("%d\t",num--);
			}
		}
		printf("\n");
	}
}
