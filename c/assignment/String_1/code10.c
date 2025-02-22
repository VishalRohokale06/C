#include <stdio.h>
#include <stdlib.h>

void main(){

	char *str = malloc(100*sizeof(char));

	fgets(str,100,stdin);
	int i=0,j=0;

	while(str[i]!='\0'){
		if(str[i]!=32){
			str[j++]=str[i];
		}
		i++;
	}
	str[j]='\0';
	printf("%s",str);
}
