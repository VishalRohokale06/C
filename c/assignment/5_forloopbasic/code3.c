#include <stdio.h>

void main(){

	for(char ch='A';ch<='Z';ch++){
		if(ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U'){
			printf("%c\n",ch);
		}
	}
}
