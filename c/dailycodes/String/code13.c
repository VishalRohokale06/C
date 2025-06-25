#include <stdio.h>

void main(){

	char name[20];
	printf("Enter your name:\n");
	scanf("%[^\n]",name);
	printf("%s\n",name);

	scanf("%[^a]",name);
        printf("%s\n",name);
}
