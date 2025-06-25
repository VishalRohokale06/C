#include <stdio.h>

void main(){

	char *str1 = "Kanha";
	char *str2 = "Kanha";
	char str3[] = {'R','a','m','\0'};
	char str4[] = {'R','a','m','\0'};

	printf("%p\n",&str1);
	printf("%p\n",&str2);
	printf("%p\n",&str3);
	printf("%p\n",&str4);
}
