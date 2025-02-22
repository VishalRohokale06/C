#include <stdio.h>

void main(){

	int x=10;
	int ans=0;
	printf("%d\n",x);
	printf("%d\n",ans);

	ans = ++x + ++x;
	printf("%d\n",x);
        printf("%d\n",ans);

	ans = 0;
	x=10;

	ans = ++x + ++x + ++x;
	printf("%d\n",x);
	printf("%d\n",ans);
	
}
