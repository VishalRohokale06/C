#include <stdio.h>

void main(){

	char str[20];
	int index=0;
	char ch;

	while((ch=getchar())!='\n'){
		str[index]=ch;
		index++;
	}

	str[index]='\0';
	puts(str);
}
