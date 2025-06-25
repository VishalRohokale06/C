#include <stdio.h>

void main(){

	char str[50];

	printf("Enter name:");
	scanf("%[^\n]",str);
	puts(str);
}
