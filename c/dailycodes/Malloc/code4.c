#include <stdio.h>

struct Data{

	int x;
	int y;
};

void main(){

	struct Data obj1 = {10,20};
	struct Data obj2 = {10,20};

	if((obj1.x==obj2.x)&&(obj1.y==obj2.y)){
		printf("Equal\n");
	}else{
		printf("Unequal\n");
	}
}
