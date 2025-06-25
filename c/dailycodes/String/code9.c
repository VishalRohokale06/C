#include <stdio.h>

void main(){

	FILE *fp = fopen("test.txt","r");
	if (fp == NULL) {
        printf("Error: Unable to open file.\n");
    
	}
	char buff[30];
	if (fgets(buff, sizeof(buff), fp) != NULL) {
        printf("%s", buff);
    } else {
        printf("Error: Unable to read from file.\n");
    }
	fclose(fp);
}
