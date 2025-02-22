#include <stdio.h>

void main(){

	int x = 20;
	int ans = 0;

	ans = x++ + x++;
	printf("%d\n",x);
	printf("%d\n",ans);

	x=31;
	ans=0;

	ans = x++ + x++;
	printf("%d\n",x);
        printf("%d\n",ans);
}
