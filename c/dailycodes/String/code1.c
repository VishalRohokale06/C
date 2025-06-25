#include <stdio.h>

void main(){

	char str1[20];
	int index=0;
	char ch;
        ch=getchar();
	while(ch!='\n'){
		str1[index]=ch;
		index++;
		ch=getchar();
	}
	str1[index]='\0';
	puts(str1);
}
