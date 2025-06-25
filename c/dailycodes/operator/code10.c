#include <stdio.h>

void main(){

	int x=10;
	int y=20;
	int ans= ++y && x++;

	printf("%d\n %d\n %d\n",x,y,ans);

	x=10,y=20;
        ans= ++y || x++;

        printf("%d\n %d\n %d\n",x,y,ans);
}
