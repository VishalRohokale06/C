#include <stdio.h>

void main(){
        
	FILE *fp1 = fopen("xyz.txt","r");	
	FILE *fp2 = fopen("abc.txt","w");
	char ch;

	while((ch=fgetc(fp1))!= EOF){
		fputc(ch,fp2);
	}
}
