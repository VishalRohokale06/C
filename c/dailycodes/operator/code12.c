#include <stdio.h>

void main(){

	int x=1;
	int y=2;
	int z=3;
	int ans=0;

	ans=(x++ || --y) && ++z;

	printf("%d\n%d\n%d\n%d\n",x,y,z,ans);
}
