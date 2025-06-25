#include <stdio.h>
#include <string.h>

struct Player{

	int jerNo;
	char playerName[20];

};

void main(){

	struct Player obj1={18,"Virat"};
	struct Player obj2={18,"Virat"};

	if((obj1.jerNo==obj2.jerNo) && (strcmp(obj1.playerName,obj2.playerName)==0)){
		printf("Equals\n");
	}else{
		printf("UnEqual\n");
	}
}
