#include <stdio.h>

void main(){
	char ch;

	printf("Enter char : ");
	scanf("%c",&ch);

	if(ch>=65 && ch<=90){
		printf("Char is Uppercase\n");
	}
	else if(ch>=97 && ch<=122){ 
		printf("Char is Lowercase\n");
	}
	else{
		printf("Invalid\n");
	}
}
