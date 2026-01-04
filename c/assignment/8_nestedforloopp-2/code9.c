#include <stdio.h>

void main(){

	int rows;
	printf("rows=");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		char ch='A';
		for(int j=1;j<=rows;j++){
			if(j%2==1){
				printf("%d\t",j);
			}else{
				printf("%c\t",ch);
			}
			ch++;
		}
		printf("\n");
	}
}
