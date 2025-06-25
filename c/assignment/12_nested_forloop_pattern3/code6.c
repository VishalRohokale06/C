#include <stdio.h>

void main(){

        int rows;
        printf("Rows:");
        scanf("%d",&rows);

        for(int i=0;i<rows;i++){
		int ch=65;
                for(int j=0;j<rows;j++){
                        if(rows%2==1){
				printf("%c\t",ch++);
			}else{
				if(j%2==0){
					printf("%d\t",ch++);
				}else{
					printf("%c\t",ch++);
				}
			}
                }
                printf("\n");
        }
}
