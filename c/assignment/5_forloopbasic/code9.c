#include <stdio.h>

void main(){

	char ch1 = 'a';
	char ch2 = 'A';

	for(int i=1;i<10;i++){
		if(i%2==1){
			printf("%c\n",ch1);
			}
		else{
			printf("%c\n",ch2);
		}
		ch1++;
		ch2++;
	}
}
