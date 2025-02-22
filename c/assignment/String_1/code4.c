#include <stdio.h>

char *mystrpr(char str[]){

	int i=0;

	while(str[i]!='\0'){
		if(str[i]>='a' &&  str[i]<='z'){
			str[i]-=32;
			
		}
		i++;
	}
	return str;
}

void main(){

	char str[]="Incubators";
	//mystrpr(str);
	printf("%s\n",mystrpr(str));
}
