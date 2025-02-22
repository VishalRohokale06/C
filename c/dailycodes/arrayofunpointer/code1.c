#include <stdio.h>

int add(int x,int y){
	return x+y;
}
int sub(int x,int y){
        return x-y;
}
int mul(int x,int y){
        return x*y;
}
int div(int x,int y){
        return x/y;
}

void main(){
	int x=10;
	int y=5;

	int (*ptr[4])(int,int) = {&add,&sub,&mul,&div};

	for(int i=0;i<4;i++){
		printf("%d\n",ptr[i](x,y));
	}
}
