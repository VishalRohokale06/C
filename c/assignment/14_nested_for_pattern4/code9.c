#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	int num=1;
	int ch =65;

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			if(i%2==1){
				if(j%2==1){
					printf("%d\t",num++);
					ch++;
				}else{
					printf("%c\t",ch++);
					num++;
				}
			}else{
				if(j%2==1){
                                        printf("%c\t",ch++);                                                                                                   num++;
                                }else{
                                        printf("%d\t",num++);                                        ch++;                                              }
			}
		}
		ch=65+i;
		num=1+i;
		printf("\n");
	}
}
