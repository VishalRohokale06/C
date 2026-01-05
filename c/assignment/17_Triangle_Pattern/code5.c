#include <stdio.h>

void main(){

	int rows;
	printf("Rows:");
	scanf("%d",&rows);

	int ch1=97;
	for(int i=1;i<=rows;i++){
		int ch2=65;
		for(int j=1;j<=i;j++){
			if(i%2==1){
				printf("%c\t",ch1);
			}else{
				printf("%c\t",ch2++);
			}
		}
		ch1++;
		printf("\n");
	}
}
