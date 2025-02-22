#include <stdio.h>
#include <string.h>

struct Player{

	int jerNo;
	char pName[20];

};

typedef struct Player IndPlayer;

void main(){

	IndPlayer pObj1={7,"MSD"};
	IndPlayer pObj2;

	IndPlayer *ptrObj = &pObj1;

	printf("%d\n",ptrObj->jerNo);
	printf("%s\n",ptrObj->pName);
}
