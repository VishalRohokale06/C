#include <stdio.h>

void main(){

        int rows;
        printf("Rows:");
        scanf("%d",&rows);

        int ch=64+(rows*rows);
	int num=rows*rows;
	for(int i=0;i<rows;i++){
                for(int j=0;j<rows;j++){
                        if(j%2==0){
				printf("%c\t",ch--);
				num--;
			}else{
				printf("%d\t",num--);
				ch--;
			}
                }
                printf("\n");
        }
}
