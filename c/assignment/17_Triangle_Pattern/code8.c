#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int num=1;
		int ch=65;
		for(int j=1;j<=i;j++){
			if(i%3==0){
				if(j%2==1){
					printf("%d\t",num);
				}else{
					printf("%c\t",ch);
				}
				num++;
				ch++;
			}else{
				printf("%d\t",num++);
			}

		}
		printf("\n");
	}
}
