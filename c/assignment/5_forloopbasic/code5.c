#include <stdio.h>

void main(){

	int start;
	scanf("%d\n",&start);
	int end;
	scanf("%d",&end);
	int mul=1;

	for(int i=start;i<=end;i++){
		if(i%2 == 0){
			mul*=i;
		}
	}
	printf("%d\n",mul);
}


