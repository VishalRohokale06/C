#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int num=1;
		int ch1=65;
		int ch2=96+i;
		if(i%3==1){
			for(int j=1;j<=i;j++){
				printf("%d\t",num++);
			}
		}else if(i%3==2){
			for(int j=1;j<=i;j++){
                                printf("%c\t",ch1++);
                        }
		}else{
			for(int j=1;j<=i;j++){
                                printf("%c\t",ch2);
                        }
		}
		printf("\n");
	}
}
