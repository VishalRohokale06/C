#include <stdio.h>

void main(){

	char str1[20];
	char str2[20];
	puts("Enter your name:");
	fgets(str1,12,stdin);
	puts(str1);
	printf("%d\n",(*stdin)._fileno);
	printf("%d\n",(*stdout)._fileno);
	printf("%d\n",(*stderr)._fileno);
}
