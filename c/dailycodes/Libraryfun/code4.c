#include <stdio.h>
#include <string.h>

long mystrlen(char str[]){

	long count=0;
	int i=0;

	while(str[i]!='\0'){
		count++;
		i++;
	}
	return count;
}

void main(){

	char *str = "Vishal";

	printf("%ld\n",mystrlen(str));
	printf("%ld\n",strlen(str));
}
