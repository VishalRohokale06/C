#include <stdio.h>

void main(){

	int start;
	scanf("%d",&start);
	int end;
	scanf("%d",&end);
	int sum=0;
	for(int i=start;i<=end;i++){
		sum+=i;
	}
	printf("%d\n",sum);
}

	
