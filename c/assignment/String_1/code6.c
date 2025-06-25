#include <stdio.h>
#include <stdlib.h>

void main(){

	char *str=malloc(100*sizeof(str));
        char ch;

	fgets(str,100,stdin);

	scanf("%c",&ch);
        
	int i=0;
	while(str[i]!='\0'){
		if(str[i]==ch){
			printf("%d\n",i);
			break;
		}
		i++;
		
	}
}
