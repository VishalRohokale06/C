#include <stdio.h>

void main(){

	int num=1;
	char ch = 'A';

	for(int i=1;i<10;i++){
		if(i%2==1){
			printf("%d\n",num);
		}
		else{
			printf("%c\n",ch);
		}
		num++;
		ch++;
	}
}

