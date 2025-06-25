#include <stdio.h>

void main(){

	int x = 27;
	int ans = 0;

	ans = ++x + ++x;
	printf("%d\n",x);
	printf("%d\n",ans);
}
