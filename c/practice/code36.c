#include <stdio.h>

void main(){
	FILE *fp = fopen("xyz.txt","r");
	fseek(fp,-5,SEEK_END);
	printf("%c\n",fgetc(fp));
}
