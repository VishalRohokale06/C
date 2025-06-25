#include <stdio.h>

void main(){

	char ch;

	printf("Input : ");
	scanf("%c",&ch);

	if(ch == 'a' || ch == 'A'){
		printf("%c is vowel\n",ch);
	}else if(ch == 'e' || ch == 'E'){
		printf("%c is vowel\n",ch);
	}else if(ch == 'i' || ch == 'I'){
                printf("%c is vowel\n",ch);
        }else if(ch == 'o' || ch == 'O'){
                printf("%c is vowel\n",ch);
        }else if(ch == 'u' || ch == 'U'){
                printf("%c is vowel\n",ch);
        }else{
		printf("%c is consonant\n",ch);
	}
}
