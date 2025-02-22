#include <stdio.h>

void main(){

	int x=1;
	int y=2;
	int ans=0;

	ans=--x || ++y;
	printf("%d\n%d\n%d\n",x,y,ans);
}

