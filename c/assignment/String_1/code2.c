#include <stdio.h>

void mystrcpy(char dis[],char src[]){

	int i=0;

	while(src[i] != '\0'){
		dis[i]=src[i];
		i++;
	}
        dis[i]='\0';
}

void main(){

	char *str="Virat";
        char str1[20];

	printf("%s\n",str);
	printf("%s\n",str1);
	mystrcpy(str1,str);
	printf("%s\n",str);
        printf("%s\n",str1);
}
