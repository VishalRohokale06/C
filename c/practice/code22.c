#include <stdio.h>

int add(int x,int y){
	return x+y;
}
int sub(int x,int y){
        return x-y;
}

void main(){
	int x=20;
	int y=10;
        int (*ptr[2]) (int,int) = {&add,&sub};
	for(int i=0;i<2;i++){
		printf("%d\n",ptr[i](x,y));
	}
}
