#include <stdio.h>


int charis(char ch){

	int flag=0;
	
	if(ch>=65 && ch<=90){
	       return flag=1;
	}else if(ch>=97 && ch<=122){
		return flag=2;
	}else{
		return flag=0;
	}
}

void main(){

	char ch;
	printf("Enter character:");
	scanf("%c",&ch);

	if(charis(ch)==1){
		printf("Given character is in UpperCase.\n");
	}else if(charis(ch)==2){
                printf("Given character is in LowerCase.\n");
        }else{
                printf("Nothing.\n");
        }
}
