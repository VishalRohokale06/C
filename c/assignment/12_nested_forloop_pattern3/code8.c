#include <stdio.h>

void main(){

        int rows;
        printf("Rows:");
        scanf("%d",&rows);

	for(int i=0;i<rows;i++){
		if(i%2==0){
			int ch=96+rows;
			for(int j=0;j<rows;j++){
				printf("%c\t",ch++);
			}
		}else{
			int ch=96+(2*rows);
			for(int j=0;j<rows;j++){
				printf("%c\t",ch--);
			}
		}
                printf("\n");
        }
}
