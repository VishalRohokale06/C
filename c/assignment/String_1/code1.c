#include <stdio.h>

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
        
	char *str="Core2Web";
	printf("%ld\n",mystrlen(str));
}
