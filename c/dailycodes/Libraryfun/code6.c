#include <stdio.h>

void mystrcpy(char dest[], char src[]){

	int i=0;
	while(src[i] != '\0'){
		dest[i] = src[i];
		i++;
	}
	dest[i]='\0';
}

void main(){

	char str1[]="Kanha";
	char str2[20];
	printf("%s\n",str1);
	printf("%s\n",str2);
	mystrcpy(str2,str1);
	printf("%s\n",str1);
        printf("%s\n",str2);
}
