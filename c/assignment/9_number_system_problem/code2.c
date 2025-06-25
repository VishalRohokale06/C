#include <stdio.h>

void main(){

	int num;
	printf("Enter num:");
	scanf("%d",&num);

	int fact=1;
	for(int i=num;i>0;i--){
			fact*=i;
	}
	printf("%d\n",fact);
}
