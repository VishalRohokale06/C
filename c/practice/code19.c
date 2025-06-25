#include <stdio.h>

void fun(int x,int y){
	x++;
	y++;
	printf("fun=%d",x);
	printf("fun=%d",y);
}

void main(){

	int x=10;
	int y=20;
	printf("main1=%d",x);
	printf("main1=%d",y);
	fun(10,20);
	printf("main2=%d",x);
	printf("main2=%d",y);
}
