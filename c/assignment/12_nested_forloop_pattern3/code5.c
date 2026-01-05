#include <stdio.h>

void main(){

        int rows;
        printf("Rows:");
        scanf("%d",&rows);
        
	int num=1;
        for(int i=0;i<rows;i++){
                for(int j=0;j<rows;j++){
                        if(j%2==0){
				printf("%d\t",num*num);
			}else{
				printf("%d\t",num*num*num);
			}
                }
		num++;
                printf("\n");
        }
}
