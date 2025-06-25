#include <stdio.h>

void main(){

	FILE *fp = fopen("xyz.txt","r");
	printf("%ld\n",ftell(fp));
	fgetc(fp);
	fgetc(fp);
	fgetc(fp);
	fgetc(fp);
	printf("%ld\n",ftell(fp));
}
