#include <stdio.h>

void main(){

        int rows;
        printf("Rows:");
        scanf("%d",&rows);
        
	int ch1=68+(rows-3);
	int ch2=99;
        for(int i=0;i<rows;i++){
	for(int j=0;j<rows;j++){
		if(i==j || i+j == rows-1){
			printf("%c\t",ch1++);
			ch1+=2;
		}else{
			printf("%c\t",ch2++);
		}
		}
                printf("\n");
        }
}
