#include <stdio.h>

void main(){

	FILE *fp = fopen("test.txt","r");

	char buff[30];
	fgets(buff,30,fp);
	printf("%s",buff);
}
