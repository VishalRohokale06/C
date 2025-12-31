#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int ch=65;
		ch=ch+i-1;
		for(int sp=1;sp<i;sp++){
			printf("\t");
		}
		for(int j=rows;j>i-1;j--){
			if(rows%2==0){
				if(i%2==1){
					if(j%2==0){
						printf("%d\t",ch++);
					}else{
						printf("%c\t",ch++);
					}
				}else{
                                        if(j%2==0){
                                                printf("%c\t",ch++);
                                        }else{
                                                printf("%d\t",ch++);
                                        }
                                }
			}else{
				if(i%2==1){
					if(j%2==1){
						printf("%c\t",ch++);
					}else{
                                        	printf("%d\t",ch++);
                                }
				}else{
                                	if(j%2==1){
                                        	printf("%d\t",ch++);
                                	}else{
                                        	printf("%c\t",ch++);
                                	}
                                }
			}
		}
		printf("\n");
	}
}

