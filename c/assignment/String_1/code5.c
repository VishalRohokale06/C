#include <stdio.h>

char* toogleChar(char str[]){

	int i=0;

	while(str[i] != '\0'){
		if(str[i]>='a'&&str[i]<='z'){
			str[i]-=32;
		}
		else if(str[i]>='A'&&str[i]<='Z'){
			str[i]+=32;
		}
		i++;
	}
	return str;
}

void main(){

	char str[]="Incubators";
	printf("%s\n",toogleChar(str));
}
