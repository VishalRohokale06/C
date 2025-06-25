#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=rows;i>0;i--){
		int ch=65+rows-i;
		for(int j=1;j<=i;j++){
			if(i%2==0){
				if(j%2==1){
					printf("%d\t",ch++);
				}else{
					printf("%c\t",ch++);
				}
			}else{
				if(j%2==1){
					printf("%c\t",ch++);
				}else{
					printf("%d\t",ch++);
				}
			}
		}
		printf("\n");
	}
}
