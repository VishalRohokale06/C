#include <stdio.h>
#include <stdlib.h>

void main(){

	char *str = malloc(100*(sizeof(char)));
	char ch;
	char rch;

	fgets(str,100,stdin);
	
	printf("Character to replace:");
	scanf("%c",&ch);

	printf("Character to replce with:");
      	scanf(" %c",&rch);
        
	int i=0;

	while(str[i]!='\0'){
		if(str[i]==ch){
			str[i]=rch;
		}
		i++;
	}
	printf("%s",str);
}

