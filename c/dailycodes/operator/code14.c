#include <stdio.h>

void main(){

	int x=5;
	int y=7;
	int ans=0;

	ans=x++ | --y;
	printf("%d\n%d\n%d\n",x,y,ans);
}
