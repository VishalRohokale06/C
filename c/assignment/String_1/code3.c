#include <stdio.h>

int mystrtoint(char str[]){

	int i=0;
	int result=0;

	while(str[i]!='\0'){
		result=result*10+(str[i]- 48);
		i++;
	}
	return result;
}

void main(){

	char str[]="12563";
	printf("%d\n",mystrtoint(str));
}
