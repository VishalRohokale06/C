#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	int num=1;

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			if(i%2==1){
			if(j%2==1){
				printf("%d\t",num++);
			}else{
				printf("%d\t",num*num);
				num++;
			}
			}else{
				if(j%2==1){
					 printf("%d\t",num*num);
                                num++;
				}else{
					printf("%d\t",num++);
				}
			}
		}
		printf("\n");
	}
}
