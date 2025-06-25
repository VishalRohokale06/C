#include <stdio.h>
#include <string.h>

void main(){

	char str1[] = "Kanha";
	char str2[20];

	printf("%s\n",str1);
	printf("%s\n",str2);
	strcpy(str2,str1);
	printf("%s\n",str1);
        printf("%s\n",str2);
}
