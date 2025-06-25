#include <stdio.h>

void main(){

	FILE *fp1 = fopen("zyx.txt","r");
	FILE *fp2 = fopen("cba.txt","w");
	char buff[20];

	while(fgets(buff,sizeof(buff),fp1)!=NULL){
		fputs(buff,fp2);
	}
}
