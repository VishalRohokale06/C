#include <stdio.h>

void main(){

	int start;
	scanf("%d",&start);
	int end;
	scanf("%d",&end);

for(int i=start;i<=end;i++){
		if(i%2==1){
			printf("%d\n",i*i*i);
		}
	}
}
