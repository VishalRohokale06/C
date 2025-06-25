#include <stdio.h>

void main(){

	char str1[20];
	int index=0;
	char ch;

	while((ch=getchar())!='\n'){
		str1[index]=ch;
		index++;
	}

	str1[index]='\0';
	puts(str1);
	printf("%s\n",str1);
}
